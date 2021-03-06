#include "binson_light.h"

/* common utility macros */
#ifndef MIN
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#endif

/*====================== binson_writer private / forward decl ================*/
static void _binson_writer_write_token(binson_writer *pwriter, uint8_t token_type, binson_value *val);

/*======================== binson_parser private / forward decl ==============*/

/* clang-format off */

/* Internal parser states, may be combined into bitmask */
#define BINSON_PARSER_STATE_BLOCK         0x01  /* block detected, NO depth updates */
#define BINSON_PARSER_STATE_IN_BLOCK      0x02  /* depth++ on just detected block */
#define BINSON_PARSER_STATE_IN_BLOCK_END  0x04  /* end of current block detected */
#define BINSON_PARSER_STATE_BLOCK_END     0x08  /* depth-- after block end detected */
#define BINSON_PARSER_STATE_NAME          0x10  /* name string processed */
#define BINSON_PARSER_STATE_VAL           0x20  /* simple type value detected (standalone or part of name:val) */
#define BINSON_PARSER_STATE_UNDEFINED     0x40



/* scan modes used with binson_parser_advance() */
/* OBJECT/ARRAY begin/end tags, also name:val all are single items */
#define BINSON_PARSER_ADVANCE_N                    0x01  /* advance n items */
#define BINSON_PARSER_ADVANCE_N_SAME_DEPTH         0x02  /* advance n items, skipping nested */
#define BINSON_PARSER_ADVANCE_N_DEPTH              0x04  /* advance from current depth to depth+n */
#define BINSON_PARSER_ADVANCE_CMP_NAME             0x08  /* field search */
#define BINSON_PARSER_ADVANCE_ENSURE_TYPE          0x10  /* additional check of binson type when other requirements met */
#define BINSON_PARSER_ADVANCE_GO_DOWN              0x20
#define BINSON_PARSER_ADVANCE_GO_UP                0x20



#if 0
/* TODO: Remove */
#define STATE_CASE(state) case state: return #state;
static char* state_to_str(uint8_t state)
{
    switch (state) {
        STATE_CASE(BINSON_PARSER_STATE_BLOCK)
        STATE_CASE(BINSON_PARSER_STATE_IN_BLOCK)
        STATE_CASE(BINSON_PARSER_STATE_IN_BLOCK_END)
        STATE_CASE(BINSON_PARSER_STATE_BLOCK_END)
        STATE_CASE(BINSON_PARSER_STATE_NAME)
        STATE_CASE(BINSON_PARSER_STATE_VAL)
        STATE_CASE(BINSON_PARSER_STATE_UNDEFINED)
        default:
            return "UNKNOWN";
    }
}
#endif

/* clang-format on */

/* parser utility macros */
#define IS_OBJECT(x) ((x)->block_stack[(x)->depth].val_type == BINSON_ID_OBJECT)
#define IS_BLOCK_TYPE(t) ((t) == BINSON_ID_OBJECT || (t) == BINSON_ID_ARRAY)
#define SETBITMASK(x, y)    ((x) |= (y))       /* Set bitmask y in byte x*/
#define CLEARBITMASK(x, y)  ((x) &= (~(y))   /* Clear bitmask y in byte x*/
#define CHECKBITMASK(x, y)  ((x) & (y))      /* Check bitmask y in byte x*/

#define SETBIT(x, b)    ((x) |= (1 << (b)))
#define CLEARBIT(x, b)  ((x) &= ~(1 << (b)))
#define CHECKBIT(x, b)  ((x) & (1 << (b)))

#define UNUSED(x)       (void)(x) /* for unused variable warning suppression */

#define OK(res)         ((res) == BINSON_ID_OK)
#define IS_CLEAN(x)     ((x)->error_flags == BINSON_ID_OK ? 1 : 0)

/* main parser traversal call. returns true, if advance request was satisfied according to 'scan_flag' */
static bool binson_parser_advance(binson_parser *pp,
                                  uint8_t scan_flag,
                                  int16_t n_steps,
                                  const char *scan_name,
                                  uint8_t ensure_type);
static bool _binson_parser_ensure_filter(binson_parser *pp, uint8_t scan_flag, uint8_t ensure_type);
static uint8_t _binson_parser_process_one(binson_parser *pp);
static uint8_t _binson_parser_process_lenval(binson_parser *pp, bbuf *pbb, uint8_t len_sizeof);

/*================== binson_io private / forward declaration =================*/

static bool _boundary_check_unsafe_access(size_t a, size_t b, size_t max);
static inline uint8_t _binson_io_write(binson_io *io, const uint8_t *psrc, size_t sz);
#define _binson_io_write_str(x, y) _binson_io_write((x), (const uint8_t *)(y), sizeof(y) - 1)
static inline uint8_t _binson_io_write_byte(binson_io *io, uint8_t src_byte);
static inline uint8_t _binson_io_read(binson_io *io, uint8_t *pdst, size_t sz);
static inline uint8_t _binson_io_advance(binson_io *io, size_t offset);
static inline uint8_t *_binson_io_get_ptr(binson_io *io);

/*=================== utility private / forward declaration ==================*/

static uint8_t _binson_util_pack_integer(int64_t val, uint8_t *pbuf, bool is_double);
static bool _binson_util_unpack_integer(const uint8_t *pbuf, uint8_t bsize, int64_t *lenval);
static inline uint8_t _binson_util_sizeof_idx(uint8_t n);
static int binson_util_cmp_bbuf2bbuf(bbuf *bb1, bbuf *bb2);
static int binson_util_cmp_bbuf2asciiz(bbuf *bb1, const char *pstr);

/*============================================================================*/
/*============================================================================*/

/* Initialize writer object and associate it with buffer specified */
/* No real writes happen if pbuf is NULL or buf_size is zero
 * but this use case allows to calculate resulting block size by calling
 * binson_writer_get_counter() after running all required binson_write_* calls */
void binson_writer_init(binson_writer *pw, uint8_t *pbuf, size_t buf_size)
{
    memset(pw, 0, sizeof(binson_writer));
    pw->io.pbuf = pbuf;
    pw->io.buf_size = buf_size;
    pw->io.buf_used = 0;
    if (pbuf == NULL || buf_size < 2) {
      pw->error_flags = BINSON_ID_INVALID_ARG;
    }
}

/* Reset writer "object" to same state it had after last binson_writer_init_init() call */
void binson_writer_reset(binson_writer *pw)
{
    pw->io.buf_used = 0;
    pw->error_flags = BINSON_ID_OK;
}

/*======================== IO (smart buffer helpers) =========================*/

static bool _boundary_check_unsafe_access(size_t a, size_t b, size_t max)
{
    size_t c = a + b;
    if (c > max) { /* Boundary violated */
        return true;
    }
    else if (c < a) { /* Unsigned overflow */
        return true;
    }
    return false;
}

/* Write sz bytes from buffer pointed with psrc to internal buffer, with overflow checks */
static inline uint8_t _binson_io_write(binson_io *io, const uint8_t *psrc, size_t sz)
{


    if (_boundary_check_unsafe_access(io->buf_used, sz, io->buf_size)) {
        return BINSON_ID_BUF_FULL;
    }

    if (io->pbuf && (psrc != io->pbuf + io->buf_used)) {
        memmove(io->pbuf + io->buf_used, psrc, sz);
    }
    else {
      //return BINSON_ID_INVALID_ARG;
    }

    io->buf_used += sz;

    return BINSON_ID_OK;
}

/* Write single byte to internal buffer, with overflow checks */
static inline uint8_t _binson_io_write_byte(binson_io *io, const uint8_t src_byte)
{//
    return _binson_io_write(io, &src_byte, 1);
}

/* Read sz bytes from internal buffer to memory location pointed with pdst, with bound checks, return error code if any */
static inline uint8_t _binson_io_read(binson_io *io, uint8_t *pdst, size_t sz)
{
    if (_boundary_check_unsafe_access(io->buf_used, sz, io->buf_size)) {
        return BINSON_ID_PARSE_END_OF_BUFFER;
    }

    if (pdst && io->pbuf) {
        memmove(pdst, io->pbuf + io->buf_used, sz);
    }

    io->buf_used += sz;

    return BINSON_ID_OK;
}


/* Advance internal read position by offset bytes, return error code if any */
static inline uint8_t _binson_io_advance(binson_io *io, size_t offset)
{
    return _binson_io_read(io, NULL, offset);
}

/* Get pointer to memory location at current read position */
static inline uint8_t *_binson_io_get_ptr(binson_io *io) {//
 return &(io->pbuf[io->buf_used]); }

/* Unified private method to write full binary representation for specified token_type and val */
void _binson_writer_write_token(binson_writer *pwriter, const uint8_t token_type, binson_value *val)
{
    uint8_t res = 0; /* write result */
    uint8_t isize = 1;

    switch (token_type) {
    /* optimization: top cases are most probable cases */
    case BINSON_ID_INTEGER:
    case BINSON_ID_STRING_LEN:
    case BINSON_ID_BYTES_LEN:
    case BINSON_ID_DOUBLE: {
        uint8_t pack_buf[sizeof(int64_t) + 1];

        if (!val) {
            res = BINSON_ID_INVALID_ARG;
            break;
        }

        isize = _binson_util_pack_integer(val->int_val, &(pack_buf[1]), (token_type == BINSON_ID_DOUBLE) ? 1 : 0);
        pack_buf[0] =
        token_type + ((token_type == BINSON_ID_DOUBLE) ? 0 : _binson_util_sizeof_idx(isize));
        isize++;
        res = _binson_io_write(&(pwriter->io), pack_buf, isize);

        break;
    }

    case BINSON_ID_STRING:
    case BINSON_ID_BYTES: {
        if (!val) {
            res = BINSON_ID_INVALID_ARG;
            break;
        }

        size_t tok_size = val->bbuf_val.bsize;
        binson_value tval;

        tval.int_val = tok_size;

        _binson_writer_write_token(pwriter, (uint8_t)(token_type + 1), &tval); /* writes type+len*/
        res = _binson_io_write(&(pwriter->io),
                               val->bbuf_val.bptr,
                               tok_size); /* writes payload: string (without \0) or bytearray */
        /*isize += tok_size;*/            /* commented since qualified as unused by clang-analyzer */
        break;
    }

    case BINSON_ID_OBJ_BEGIN:
    case BINSON_ID_ARRAY_BEGIN:
    case BINSON_ID_OBJ_END:
    case BINSON_ID_ARRAY_END:
    case BINSON_ID_TRUE:
    case BINSON_ID_FALSE:
        res = _binson_io_write_byte(&(pwriter->io), token_type);
        break;

    case BINSON_ID_BOOLEAN:
        if (!val) {
            res = BINSON_ID_INVALID_ARG;
        }
        else {
            res = _binson_io_write_byte(&(pwriter->io), val->bool_val ? BINSON_ID_TRUE : BINSON_ID_FALSE);
        }
        break;

    default:
        return;
    }

    if (res) {
        pwriter->error_flags = res;
    }
}

/* Write OBJECT_BEGIN token */
void binson_write_object_begin(binson_writer *pw)
{
    _binson_writer_write_token(pw, BINSON_ID_OBJ_BEGIN, NULL);
}

/* Write OBJECT_END token */
void binson_write_object_end(binson_writer *pw)
{
    _binson_writer_write_token(pw, BINSON_ID_OBJ_END, NULL);
}

/* Write ARRAY_BEGIN token */
void binson_write_array_begin(binson_writer *pw)
{
    _binson_writer_write_token(pw, BINSON_ID_ARRAY_BEGIN, NULL);
}

/* Write ARRAY_END token */
void binson_write_array_end(binson_writer *pw)
{
    _binson_writer_write_token(pw, BINSON_ID_ARRAY_END, NULL);
}

/* Write BOOLEAN token */
void binson_write_boolean(binson_writer *pw, bool bval)
{
    pw->tmp_val.bool_val = bval;
    _binson_writer_write_token(pw, BINSON_ID_BOOLEAN, &(pw->tmp_val));
}

/* Write INTEGER token */
void binson_write_integer(binson_writer *pw, int64_t ival)
{
    pw->tmp_val.int_val = ival;
    _binson_writer_write_token(pw, BINSON_ID_INTEGER, &(pw->tmp_val));
}

/* Write DOUBLE token */
void binson_write_double(binson_writer *pw, double dval)
{
    pw->tmp_val.double_val = dval;
    _binson_writer_write_token(pw, BINSON_ID_DOUBLE, &(pw->tmp_val));
}

/* Write STRING token specified by zero-terminated string pointed with pstr */
void binson_write_string(binson_writer *pw, const char *pstr)
{  //
    binson_write_string_with_len(pw, pstr, strlen(pstr));
}

/* Write name part of composite token specified by zero-terminated string pointed with pstr*/
void binson_write_name(binson_writer *pw, const char *pstr)
{
    pw->tmp_val.bbuf_val.bptr = (uint8_t *)pstr;
    pw->tmp_val.bbuf_val.bsize = strlen(pstr);
    _binson_writer_write_token(pw, BINSON_ID_STRING, &pw->tmp_val);
}


/* Write STRING token specified by pointer pstr and number of bytes len */
void binson_write_string_with_len(binson_writer *pw, const char *pstr, size_t len)
{
    pw->tmp_val.bbuf_val.bptr = (uint8_t *)pstr;
    pw->tmp_val.bbuf_val.bsize = len;
    _binson_writer_write_token(pw, BINSON_ID_STRING, &pw->tmp_val);
}

/* Write BYTES token specified by pointer pbuf and number of bytes len */
void binson_write_bytes(binson_writer *pw, const uint8_t *pbuf, size_t len)
{
    pw->tmp_val.bbuf_val.bptr = (uint8_t *)pbuf;
    pw->tmp_val.bbuf_val.bsize = len;
    _binson_writer_write_token(pw, BINSON_ID_BYTES, &pw->tmp_val);
}

/* write binson-encoded block */
uint8_t binson_write_raw(binson_writer *pw, const uint8_t *psrc, size_t sz)
{
    return _binson_io_write(&(pw->io), psrc, sz);
}

/*=================================== PARSER =================================*/

/* Initialize parser object and associate it with buffer specified */
void binson_parser_init(binson_parser *pp, uint8_t *pbuf, size_t buf_size)
{
    memset(pp, 0, sizeof(binson_parser));
    pp->io.pbuf = pbuf;
    pp->io.buf_size = buf_size;
    pp->io.buf_used = 0;
    binson_parser_reset(pp);
}

/* Reset parser "object" to same state it had after last binson_parser_init() call */
void binson_parser_reset(binson_parser *pp)
{
    pp->io.buf_used = 0;
    pp->error_flags = BINSON_ID_OK;
    pp->state = BINSON_PARSER_STATE_UNDEFINED;
    pp->depth = 0;
    pp->val_type = BINSON_ID_UNKNOWN;
    memset(pp->block_stack, 0x00, sizeof(pp->block_stack));

    pp->cb = NULL;
    pp->cb_param = NULL;

    pp->name.bptr = NULL;
    pp->name.bsize = 0;
}

void binson_parser_set_callback(binson_parser *pp, binson_parser_cb cb, void *cb_param)
{
    pp->cb = cb;
    pp->cb_param = cb_param;
}

/* Scanning loop, which stops when 'scan_flag' condition met
Returns "true", if advance request was satisfied according to 'scan_flag',
"false" means no more items to scan for requested "scan_flag" */
static bool binson_parser_advance(binson_parser *pp,
                           uint8_t scan_flag,
                           int16_t n_steps,
                           const char *scan_name,
                           uint8_t ensure_type)
{
    int16_t orig_steps = n_steps;
    uint8_t orig_depth = pp->depth;
    uint8_t req_state = BINSON_PARSER_STATE_UNDEFINED; /* state update request */

    /* subsequent field name lookups must clear previous BINSON_ID_PARSE_NO_FIELD_NAME error explicitely */
    if (CHECKBITMASK(scan_flag, BINSON_PARSER_ADVANCE_CMP_NAME) && pp->error_flags == BINSON_ID_PARSE_NO_FIELD_NAME) {
        pp->error_flags = BINSON_ID_OK;
    }

    /* check for consistency */
    if (pp->error_flags != BINSON_ID_OK) {
        return false;
    }
    if (!pp->depth && pp->state != BINSON_PARSER_STATE_UNDEFINED) { /* advance attempt beyond the top block */
        pp->error_flags = BINSON_ID_PARSE_BLOCK_ENDED;
        return false;
    }

    if (CHECKBITMASK(scan_flag, BINSON_PARSER_ADVANCE_N_DEPTH) && orig_depth + orig_steps < 0) { /* too much up */
        pp->error_flags = BINSON_ID_INVALID_ARG;
        return false;
    }

    /* ------------- scanning loop (no recursion) ------------- */
    while (true) {
        /* context checks for field name search */
        if (pp->state != BINSON_PARSER_STATE_NAME && IS_OBJECT(pp)
            && CHECKBITMASK(scan_flag, BINSON_PARSER_ADVANCE_CMP_NAME) && pp->depth == orig_depth) {
            int cmp_res = binson_parser_cmp_name(pp, scan_name);
            if (cmp_res == 0) {
                return _binson_parser_ensure_filter(pp, scan_flag, ensure_type);
            }
            if (cmp_res > 0) { /* current name is lexicographically greater than requested */
                pp->error_flags = BINSON_ID_PARSE_NO_FIELD_NAME;
                return false;
            }
        }

        /* request state update w/o data read operation if possible */
        switch (pp->state) {
        case BINSON_PARSER_STATE_BLOCK: /* it's time to enter current block */
            req_state = BINSON_PARSER_STATE_IN_BLOCK;
            break;

        case BINSON_PARSER_STATE_IN_BLOCK_END: /* it's time to leave current block */
            req_state = BINSON_PARSER_STATE_BLOCK_END;
            break;

        default:
            /* required to know next byte to continue processing */
            req_state = _binson_parser_process_one(pp);
            if (pp->error_flags != BINSON_ID_OK) {
                return false;
            }

            if (
                (pp->state == BINSON_PARSER_STATE_NAME) &&
                (!CHECKBITMASK(req_state,
                               BINSON_PARSER_STATE_VAL |
                               BINSON_PARSER_STATE_BLOCK))
               ) {
                pp->error_flags = BINSON_ID_PARSE_WRONG_TYPE;
                return false;
            }
        }

        /* transition validation, MUST meet binson specs */
        switch (req_state) {
        case BINSON_PARSER_STATE_NAME: /* pp->state => BINSON_PARSER_STATE_NAME */
            if (CHECKBITMASK(pp->state,
                             BINSON_PARSER_STATE_IN_BLOCK |  /* CASE: first OBJECT item's name */
                             BINSON_PARSER_STATE_BLOCK_END | /* CASE: item's name after nested block-item */
                             BINSON_PARSER_STATE_VAL)) {     /* CASE: next OBJECT's simple name:val */
                break;                                       /* valid transition */
            }
            /* Falls through. */

        case BINSON_PARSER_STATE_BLOCK: /* pp->state => BINSON_PARSER_STATE_BLOCK */
            if (CHECKBITMASK(pp->state,
                             BINSON_PARSER_STATE_IN_BLOCK |    /* CASE: nested blocks */
                             BINSON_PARSER_STATE_BLOCK_END |   /* CASE: sequential blocks */
                             BINSON_PARSER_STATE_VAL |         /* CASE: block after simple type */
                             BINSON_PARSER_STATE_UNDEFINED)) { /* CASE: topmost block */

                break; /* valid transition */
            }
            /* Falls through. */

        case BINSON_PARSER_STATE_IN_BLOCK: /* pp->state => BINSON_PARSER_STATE_IN_BLOCK */
            if (CHECKBITMASK(pp->state, BINSON_PARSER_STATE_BLOCK)) {
                break; /* valid transition */
            }
            /* Falls through. */

        case BINSON_PARSER_STATE_IN_BLOCK_END: /* pp->state => BINSON_PARSER_STATE_IN_BLOCK_END */
            if (CHECKBITMASK(pp->state,
                             BINSON_PARSER_STATE_IN_BLOCK |  /* CASE: empty block */
                             BINSON_PARSER_STATE_BLOCK_END | /* CASE: nested blocks end */
                             BINSON_PARSER_STATE_VAL)) {     /* CASE: usual block end */
                //((if (pp->block_stack[pp->depth].val_type)
                break; /* valid transition */
            }
            /* Falls through. */

        case BINSON_PARSER_STATE_BLOCK_END: /* pp->state => BINSON_PARSER_STATE_BLOCK_END */
            if (CHECKBITMASK(pp->state, BINSON_PARSER_STATE_IN_BLOCK_END)) {
                break; /* valid transition */
            }
            /* Falls through. */

        case BINSON_PARSER_STATE_VAL: /* pp->state => BINSON_PARSER_STATE_VAL */
            if (CHECKBITMASK(pp->state,
                             BINSON_PARSER_STATE_IN_BLOCK |  /* CASE: first ARRAY value */
                             BINSON_PARSER_STATE_BLOCK_END | /* CASE: ARRAY value after nested OBJECT-value */
                             BINSON_PARSER_STATE_NAME |      /* CASE: value part of name:val item of OBJECT */
                             BINSON_PARSER_STATE_VAL)) {     /* CASE: simple value after simple value */
                break;                                       /* valid transition */
            }
            /* Falls through. */

        case BINSON_PARSER_STATE_UNDEFINED: /* pp->state => BINSON_PARSER_STATE_UNDEFINED */
            if (CHECKBITMASK(pp->state, BINSON_PARSER_STATE_BLOCK_END)) { /* CASE: top block end */
                pp->state = req_state;
            }
            /* Falls through. */ /* do not break here, exit with error instead */

        default:
            pp->error_flags = BINSON_ID_PARSE_WRONG_STATE;
            return false;
        }

        /* callback invocation */
        if (pp->cb) {
            pp->cb(pp, req_state, pp->cb_param);
        }

        /* DO state transition  */
        pp->state = req_state;

        switch (pp->state) {
        case BINSON_PARSER_STATE_NAME: /*  => BINSON_PARSER_STATE_NAME */
            continue;                  /* process val part of field:val (OBJECT item) */

        case BINSON_PARSER_STATE_IN_BLOCK: /* pp->state => BINSON_PARSER_STATE_IN_BLOCK */
            if (pp->depth + 1 >= MAX_DEPTH) {
                pp->error_flags = BINSON_ID_PARSE_MAX_DEPTH_REACHED;
                return false;
            }
            pp->block_stack[pp->depth].name = pp->name; /* copy bbuf via assignment */
            pp->name.bptr = NULL;
            pp->name.bsize = 0; /* need to reset stored name at new block begin */
            pp->depth++;
            pp->block_stack[pp->depth].val_type = pp->val_type; /* BINSON_ID_OBJECT vs BINSON_ID_ARRAY */
            break;

        case BINSON_PARSER_STATE_BLOCK_END: /*  => BINSON_PARSER_STATE_BLOCK_END */
            if (!pp->depth) {
                pp->error_flags = BINSON_ID_PARSE_BLOCK_ENDED;
                return false;
            }
            pp->depth--;
            if (pp->depth == 0 && pp->io.pbuf[pp->io.buf_used-1] != BINSON_ID_OBJ_END) {
                pp->error_flags = BINSON_ID_PARSE_WRONG_TYPE;
                return false;
            }
            pp->val_type = pp->block_stack[pp->depth].val_type; /* restore BINSON_ID_OBJECT vs BINSON_ID_ARRAY */
            pp->name = pp->block_stack[pp->depth].name;         /* copy bbuf via assignment */
            break;

        default:
            break; /* do nothing here (no special action for current transition) */
        }


        /* extra validation, when requested via 'scan_flag' */
        _binson_parser_ensure_filter(pp, scan_flag, ensure_type);

        /* one step done */
        if (n_steps > 0) { /* negative value means "till the current block's end" */
            n_steps--;
        }

        /* ------------- scan more or stop? ------------- */
        if (CHECKBITMASK(scan_flag, BINSON_PARSER_ADVANCE_N) && n_steps == 0) {
            break;
        }

        if (CHECKBITMASK(scan_flag, BINSON_PARSER_ADVANCE_N_SAME_DEPTH) && n_steps == 0 && pp->depth == orig_depth) {
            break;
        }

        if (CHECKBITMASK(scan_flag, BINSON_PARSER_ADVANCE_N_SAME_DEPTH) && pp->state == BINSON_PARSER_STATE_IN_BLOCK_END
            && n_steps < 0 && pp->depth == orig_depth) {
            break;
        }

        /* "go_into" condition */
        if (CHECKBITMASK(scan_flag, BINSON_PARSER_ADVANCE_N_DEPTH) && orig_steps > 0
            && (pp->depth == orig_depth + orig_steps /*|| pp->depth == 0*/)
            && pp->state == BINSON_PARSER_STATE_IN_BLOCK) {
            break;
        }

        /* "go_up" condition */
        if (CHECKBITMASK(scan_flag, BINSON_PARSER_ADVANCE_N_DEPTH) && orig_steps < 0
            && (pp->depth == orig_depth + orig_steps /*|| pp->depth == 0*/)
            && pp->state == BINSON_PARSER_STATE_BLOCK_END) {
            break;
        }
    }

    /* return code is used for end-of-object detection */
    return pp->state != BINSON_PARSER_STATE_IN_BLOCK_END ? _binson_parser_ensure_filter(pp, scan_flag, ensure_type) :
                                                           false;
}

/* Utility function which return false in case of type mismatch */
static bool _binson_parser_ensure_filter(binson_parser *pp, uint8_t scan_flag, uint8_t ensure_type)
{
    if (
        (ensure_type != BINSON_ID_UNKNOWN) &&
        CHECKBITMASK(scan_flag, BINSON_PARSER_ADVANCE_ENSURE_TYPE) &&
        (
            (ensure_type == BINSON_ID_BLOCK && !IS_BLOCK_TYPE(pp->val_type)) ||
            (ensure_type != BINSON_ID_BLOCK && ensure_type != pp->val_type)        )
       ) {
        if ((ensure_type == BINSON_ID_OBJECT || ensure_type == BINSON_ID_ARRAY) && pp->depth > 0) {
            if (ensure_type == pp->block_stack[pp->depth - 1].val_type) {
                return true;
            }
        }
        pp->error_flags = BINSON_ID_PARSE_WRONG_TYPE;
        return false;
    }

    return true;
}

/* Utility function for reading and processing single binson chunk */
static uint8_t _binson_parser_process_one(binson_parser *pp)
{
    uint8_t raw_byte = 0;
    pp->error_flags = _binson_io_read(&pp->io, &raw_byte, 1);
    if (pp->error_flags != BINSON_ID_OK) {
        return false;
    }

    switch (raw_byte) {
    case BINSON_ID_OBJ_BEGIN:
        pp->val_type = BINSON_ID_OBJECT;
        return BINSON_PARSER_STATE_BLOCK;

    case BINSON_ID_OBJ_END:
        pp->val_type = BINSON_ID_OBJECT;
        return BINSON_PARSER_STATE_IN_BLOCK_END;

    case BINSON_ID_ARRAY_BEGIN:
        pp->val_type = BINSON_ID_ARRAY;
        return BINSON_PARSER_STATE_BLOCK;

    case BINSON_ID_ARRAY_END:
        pp->val_type = BINSON_ID_ARRAY;
        return BINSON_PARSER_STATE_IN_BLOCK_END;

    case BINSON_ID_FALSE:
    case BINSON_ID_TRUE:
        pp->val_type = BINSON_ID_BOOLEAN;
        pp->val.bool_val = (raw_byte == BINSON_ID_TRUE);
        return BINSON_PARSER_STATE_VAL;

    case BINSON_ID_DOUBLE: {
        const uint8_t *ptr = _binson_io_get_ptr(&pp->io);
        pp->val_type = BINSON_ID_DOUBLE;
        pp->error_flags = _binson_io_advance(&pp->io, 8);
        if (IS_CLEAN(pp)) {
            /* automatic uint64_t -> double translation magic via pp->val union */
            _binson_util_unpack_integer(ptr, 8, &pp->val.int_val);
        }
        return BINSON_PARSER_STATE_VAL;
    }

    case BINSON_ID_INTEGER_8:
    case BINSON_ID_INTEGER_16:
    case BINSON_ID_INTEGER_32:
    case BINSON_ID_INTEGER_64: {
        const uint8_t *ptr = _binson_io_get_ptr(&pp->io);
        uint8_t size = 1U << (raw_byte & 0x03U);
        pp->val_type = BINSON_ID_INTEGER;
        pp->error_flags = _binson_io_advance(&pp->io, size);
        if (IS_CLEAN(pp)) {
            if (!_binson_util_unpack_integer(ptr, size, &pp->val.int_val))
            {
                pp->error_flags = BINSON_ID_PARSE_WRONG_TYPE;
            }
        }
        return BINSON_PARSER_STATE_VAL;
    }

    /* string and field names processing */
    case BINSON_ID_STRING_8:
    case BINSON_ID_STRING_16:
    case BINSON_ID_STRING_32: {
        bool is_fieldname = (IS_OBJECT(pp) && pp->state != BINSON_PARSER_STATE_NAME) ? 1 : 0;
        bbuf prev_name = pp->name;
        pp->error_flags = _binson_parser_process_lenval(pp,
                                                        is_fieldname ? &pp->name : &pp->val.bbuf_val,
                                                        (uint8_t)(1U << (raw_byte & 0x03U)));

        if (is_fieldname && prev_name.bptr != NULL && pp->error_flags == BINSON_ID_OK) {
            if (binson_util_cmp_bbuf2bbuf(&prev_name, &pp->name) >= 0) {
                pp->error_flags = BINSON_ID_PARSE_WRONG_TYPE;
            }
        }
        pp->val_type = BINSON_ID_STRING;
        return is_fieldname ? BINSON_PARSER_STATE_NAME : BINSON_PARSER_STATE_VAL;
    }

    case BINSON_ID_BYTES_8:
    case BINSON_ID_BYTES_16:
    case BINSON_ID_BYTES_32:
        pp->error_flags = _binson_parser_process_lenval(pp,
                                                        &pp->val.bbuf_val,
                                                        (uint8_t)(1U << (raw_byte & 0x03U)));
        pp->val_type = BINSON_ID_BYTES;
        return BINSON_PARSER_STATE_VAL;

    default:
        pp->error_flags = BINSON_ID_PARSE_WRONG_TYPE;
    }

    return BINSON_PARSER_STATE_UNDEFINED;
}

/* Parsing helper: process variable length tokens: len+data */
static uint8_t _binson_parser_process_lenval(binson_parser *pp, bbuf *pbb, uint8_t len_sizeof)
{
    const uint8_t *ptr = _binson_io_get_ptr(&pp->io);
    uint8_t res = _binson_io_advance(&pp->io, len_sizeof);
    int64_t len64;

    if (!OK(res)) {
        return res;
    }

    if (!_binson_util_unpack_integer(ptr, len_sizeof, &len64)) {
        return BINSON_ID_PARSE_WRONG_TYPE;
    }

    if (len64 < 0 || len64 > INT32_MAX) {
        return BINSON_ID_PARSE_BAD_LEN;
    }

    pbb->bptr = (uint8_t *)ptr + len_sizeof;
    pbb->bsize = (size_t) len64;
    return _binson_io_advance(&pp->io, (size_t)len64);
}

/* */
bool binson_parser_field_ensure(binson_parser *pp, const char *scan_name, uint8_t ensure_type)
{
    return binson_parser_advance(pp,
                                 BINSON_PARSER_ADVANCE_N_SAME_DEPTH | BINSON_PARSER_ADVANCE_CMP_NAME
                                 | BINSON_PARSER_ADVANCE_ENSURE_TYPE,
                                 -1,
                                 scan_name,
                                 ensure_type);
}

/* */
bool binson_parser_next_ensure(binson_parser *pp, uint8_t ensure_type)
{
    return binson_parser_advance(pp,
                                 BINSON_PARSER_ADVANCE_N_SAME_DEPTH | BINSON_PARSER_ADVANCE_ENSURE_TYPE,
                                 1,
                                 NULL,
                                 ensure_type);
}

/* */
bool binson_parser_go_into(binson_parser *pp)
{
    return binson_parser_advance(pp,
                                 BINSON_PARSER_ADVANCE_N_DEPTH | BINSON_PARSER_ADVANCE_ENSURE_TYPE,
                                 1,
                                 NULL,
                                 BINSON_ID_BLOCK);
}

/* */
bool binson_parser_go_into_object(binson_parser *pp)
{
    return binson_parser_advance(pp,
                                 BINSON_PARSER_ADVANCE_N_DEPTH | BINSON_PARSER_ADVANCE_ENSURE_TYPE,
                                 1,
                                 NULL,
                                 BINSON_ID_OBJECT);
}

/* */
bool binson_parser_go_into_array(binson_parser *pp)
{
    return binson_parser_advance(pp,
                                 BINSON_PARSER_ADVANCE_N_DEPTH | BINSON_PARSER_ADVANCE_ENSURE_TYPE,
                                 1,
                                 NULL,
                                 BINSON_ID_ARRAY);
}

bool binson_parser_go_up(binson_parser *pp)
{
    return binson_parser_advance(pp, BINSON_PARSER_ADVANCE_N_DEPTH, -1, NULL, BINSON_ID_UNKNOWN);
}

/* looped "_go_up()" version, moving up till required block type */
bool binson_parser_go_upto_object(binson_parser *pp)
{
    return binson_parser_advance(pp,
                                 BINSON_PARSER_ADVANCE_N_DEPTH | BINSON_PARSER_ADVANCE_ENSURE_TYPE,
                                 -1,
                                 NULL,
                                 BINSON_ID_OBJECT);
}

/* looped "_go_up()" version, moving up till required block type */
bool binson_parser_go_upto_array(binson_parser *pp)
{
    return binson_parser_advance(pp,
                                 BINSON_PARSER_ADVANCE_N_DEPTH | BINSON_PARSER_ADVANCE_ENSURE_TYPE,
                                 -1,
                                 NULL,
                                 BINSON_ID_ARRAY);
}

/* get location and size of buffer part which reflects whole current block being parsed */
bool binson_parser_get_raw(binson_parser *pp, bbuf *pbb)
{
    bbuf bb;
    bool res;

    if (pp->state != BINSON_PARSER_STATE_BLOCK) { /* current position must be "block begin" */
        pp->error_flags = BINSON_ID_PARSE_WRONG_STATE;
        return false;
    }

    bb.bptr = (uint8_t *)  _binson_io_get_ptr(&pp->io) - 1;
    bb.bsize = pp->io.buf_used - 1;
    res = binson_parser_next_ensure(pp, BINSON_ID_UNKNOWN);
    if (res) {
        pbb->bptr = bb.bptr;
        pbb->bsize = pp->io.buf_used - bb.bsize;
    }

    return res;
}

/* copy current block to specified writer */
bool binson_parser_to_writer(binson_parser *pp, binson_writer *pw)
{
    bbuf bb;

    if (!binson_parser_get_raw(pp, &bb)) {
        return false;
    }

    binson_write_raw(pw, bb.bptr, bb.bsize);
    return IS_CLEAN(pw);
}

#ifdef WITH_TO_STRING
bool _to_string_meta_cb(binson_parser *pp, uint8_t new_state, bool nice, void *param)
{
    binson_io *io = (binson_io *)param;
    size_t io_avail;
    int chunk_len;

    /* when to add commas */
    if ((pp->state == BINSON_PARSER_STATE_VAL && new_state != BINSON_PARSER_STATE_IN_BLOCK_END)
        || (pp->state == BINSON_PARSER_STATE_BLOCK_END && new_state == BINSON_PARSER_STATE_NAME)
        || (pp->state == BINSON_PARSER_STATE_BLOCK_END && new_state == BINSON_PARSER_STATE_VAL)
        || (pp->state == BINSON_PARSER_STATE_BLOCK_END && new_state == BINSON_PARSER_STATE_BLOCK)) {
        _binson_io_write_byte(io, ',');
    }

    /* write indentation spaces */
    if (nice && 0) {  // indented 'nice' mode is unsupported now
        _binson_io_write_byte(io, '\n');
        for (int i = 0; i < pp->depth * INDENT_WIDTH; i++) {
            _binson_io_write_byte(io, ' ');
        }
    }

    io_avail = io->buf_size - io->buf_used;

    switch (new_state) {
    case BINSON_PARSER_STATE_BLOCK:
        _binson_io_write_byte(io, pp->val_type == BINSON_ID_OBJECT ? '{' : '[');
        return true;
    case BINSON_PARSER_STATE_BLOCK_END:
        _binson_io_write_byte(io, pp->val_type == BINSON_ID_OBJECT ? '}' : ']');
        return true;
    case BINSON_PARSER_STATE_NAME:
        chunk_len = snprintf((char *)_binson_io_get_ptr(io), io_avail, "\"%*.*s\":", 0, (int) pp->name.bsize, pp->name.bptr);
        break;

    case BINSON_PARSER_STATE_VAL:
        switch (pp->val_type) {
        case BINSON_ID_BOOLEAN:
            chunk_len = snprintf((char *)_binson_io_get_ptr(io), io_avail, "%s", pp->val.bool_val ? "true" : "false");
            break;
        case BINSON_ID_DOUBLE:
            chunk_len = snprintf((char *)_binson_io_get_ptr(io), io_avail, "%g", pp->val.double_val);
            break;
        case BINSON_ID_INTEGER:
            chunk_len = snprintf((char *)_binson_io_get_ptr(io), io_avail, "%lld", (long long)pp->val.int_val);
            break;
        case BINSON_ID_STRING:
            chunk_len = snprintf((char *)_binson_io_get_ptr(io),
                                 io_avail,
                                 "\"%*.*s\"",
                                 0,
                                 (int) pp->val.bbuf_val.bsize,
                                 pp->val.bbuf_val.bptr);
            break;
        case BINSON_ID_BYTES:
            _binson_io_write_str(io, "<data>"); /* let's make afl happy first */
            /*_binson_io_write_str( io, "0x" );
                    for (uint8_t i=0; i<pp->val.bbuf_val.bsize; i++)
                    {
                      chunk_len = sprintf( (char*)_binson_io_get_ptr(io), "%02x", (pp->val.bbuf_val.bptr)[i]);
                      _binson_io_write( io, _binson_io_get_ptr(io), (size_t) chunk_len );
                    }*/
            return true;

        default: /* we should not get here */
            return true;
        }
        break;

    default:
        return true; /* do nothing */
    }

    _binson_io_write(io, _binson_io_get_ptr(io), MIN((size_t)chunk_len, io_avail));
    return true;
}

bool _to_string_nice_cb(binson_parser *pp, uint8_t new_state, void *param)
{
    return _to_string_meta_cb(pp, new_state, true, param);
}

bool _to_string_cb(binson_parser *pp, uint8_t new_state, void *param)
{
    return _to_string_meta_cb(pp, new_state, false, param);
}

/* Convert OBJECT/ARRAY at current position to it's string representation */
bool binson_parser_to_string(binson_parser *pp, uint8_t *pbuf, size_t buf_size, bool nice)
{
    binson_parser_cb stored_cb = pp->cb; /* store current callback & param */
    void *stored_cb_param = pp->cb_param;
    binson_io str_io;
    str_io.pbuf = pbuf;
    str_io.buf_size = buf_size;
    str_io.buf_used = 0;
    binson_parser_set_callback(pp, nice ? _to_string_nice_cb : _to_string_cb, &str_io);
    binson_parser_advance(pp, BINSON_PARSER_ADVANCE_N_SAME_DEPTH, -1, NULL, BINSON_ID_UNKNOWN);
    _binson_io_write_byte(&str_io, 0); /* string terminating zero */

    /* restore saved callback & param */
    pp->cb = stored_cb;
    pp->cb_param = stored_cb_param;

    return true;
}
#endif /* WITH_TO_STRING */


/* Act as strcmp() for internal current name and C-string specified with pstr */
int binson_parser_cmp_name(binson_parser *pp, const char *pstr)
{  //
    if (pp->name.bptr == NULL) {
        return -1;
    }
    return binson_util_cmp_bbuf2asciiz(&pp->name, pstr);
}

/* Checks whether current string equals to string specified with pstr */
bool binson_parser_string_equals(binson_parser *pp, const char *pstr)
{
    return binson_util_cmp_bbuf2asciiz(&pp->val.bbuf_val, pstr) == 0 ? true : false;
}



/* Getter for BOOLEAN value */
uint8_t binson_parser_get_boolean(binson_parser *pp) { return pp->val.bool_val; }

/* Getter for INTEGER value */
int64_t binson_parser_get_integer(binson_parser *pp) { return pp->val.int_val; }

/* Getter for DOUBLE value */
double binson_parser_get_double(binson_parser *pp) { return pp->val.double_val; }

/* Getter for STRING value */
bbuf *binson_parser_get_string_bbuf(binson_parser *pp) { return &pp->val.bbuf_val; }

/* Getter for BYTES value */
bbuf *binson_parser_get_bytes_bbuf(binson_parser *pp) { return &pp->val.bbuf_val; }

/*======================== UTIL ===============================*/

/* Convert LE bytearray representation of its int64_t equivalent */

static bool _binson_util_unpack_integer(const uint8_t *pbuf, uint8_t bsize, int64_t *value)
{
    uint64_t ui64 = pbuf[bsize - 1] & 0x80 ? ~0ULL : 0; /* prefill with ones or zeroes depending of sign presence */
    int i;

    for (i = bsize - 1; i >= 0; i--) {
        ui64 <<= 8;
        ui64 |= pbuf[i];
    }

    *value = (int64_t) ui64;

    if ((*value >= INT8_MIN && *value <= INT8_MAX) && bsize == 1) {
        return true;
    }

    else if (bsize == 2 && (*value < INT8_MIN || *value > INT8_MAX)) {
        return true;
    }

    else if (bsize == 4 && (*value < INT16_MIN || *value > INT16_MAX)) {
        return true;
    }

    else if (bsize == 8 && (*value < INT32_MIN || *value > INT32_MAX)) {
        return true;
    }

    return false;
}

/* Convert int64_t argument to its LE bytearray representation and return number of bytes occupied */
static uint8_t _binson_util_pack_integer(int64_t val, uint8_t *pbuf,  bool is_double)
{

    int i;

    uint8_t size;

    if (is_double) {
        size = sizeof(uint64_t);
    }
    else {
        if (val >= INT8_MIN && val <= INT8_MAX) {
            size = sizeof(uint8_t);
        }
        else if (val >= INT16_MIN && val <= INT16_MAX) {
            size = sizeof(uint16_t);
        }
        else if (val >= INT32_MIN && val <= INT32_MAX) {
            size = sizeof(uint32_t);
        }
        else {
            size = sizeof(uint64_t);
        }
    }

    for (i = 0; i < size; i++) {
        pbuf[i] = (uint8_t)(val & 0xff);
        val >>= 8;
    }

    return size;
}

/* Integer conversion helper: convert sizeof argument to index in constant list */
static inline uint8_t _binson_util_sizeof_idx(uint8_t n)
{
    uint8_t idx = n;

    if (n == 4) {
        idx = 3;
    }
    else if (n > 4) {
        idx = 4;
    }

    return idx;
}


/* Compare two bytearrays in lexicographical sense.  return value same as  strcmp() */
static int binson_util_cmp_bbuf2bbuf(bbuf *bb1, bbuf *bb2)
{
    int r = memcmp(bb1->bptr, bb2->bptr, MIN(bb1->bsize, bb2->bsize));
    return (r == 0) ? ((int) (bb1->bsize - bb2->bsize)) : r;
}

/* Compare zero-terminated string with bytearrays in lexicographical sense.  return value same as  strcmp() */
static int binson_util_cmp_bbuf2asciiz(bbuf *bb1, const char *pstr)
{
    bbuf bb2 = { .bptr = (uint8_t *)pstr, .bsize = (size_t)strlen(pstr) };
    return binson_util_cmp_bbuf2bbuf(bb1, &bb2);
}
