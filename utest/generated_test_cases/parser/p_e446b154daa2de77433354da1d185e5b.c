#include <assert.h>
#include <string.h>
#include "binson_parser.h"

/*
{
  "": " ", 
  "": "F", 
  "": "", 
  "4": "", 
  "F??      ": "BBBBBCCCCC "
}
*/
int main(void)
{
    uint8_t binson_bytes[166] = "\x40\x14\x00\x14\x01\x00\x14\x01\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x46\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x34\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x15\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x16\x14\x14\x14\x14\x14\x14\x14\x14\x14\x46\x3f\xef\xbf\xbd\x00\x00\x00\x00\x00\x00\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x42\x42\x42\x42\x42\x43\x43\x43\x43\x43\x00\x41";
    binson_parser p;
    double dval; (void) dval;
    int64_t intval; (void) intval;
    bool boolval; (void) boolval;
    bbuf *rawval; (void) rawval;
    assert(binson_parser_init(&p, binson_bytes, sizeof(binson_bytes)));
    assert(binson_parser_verify(&p));
    assert(p.error_flags == BINSON_ID_OK);
    assert(binson_parser_go_into_object(&p));
    assert(p.error_flags == BINSON_ID_OK);
    assert(binson_parser_field_ensure_with_length(&p, "", 0, BINSON_TYPE_STRING));
    assert(p.error_flags == BINSON_ID_OK);
    rawval = binson_parser_get_string_bbuf(&p);
    assert(p.error_flags == BINSON_ID_OK);
    assert(memcmp(rawval->bptr, "\x00", rawval->bsize) == 0);
    assert(binson_parser_field_ensure_with_length(&p, "\x14", 1, BINSON_TYPE_STRING));
    assert(p.error_flags == BINSON_ID_OK);
    rawval = binson_parser_get_string_bbuf(&p);
    assert(p.error_flags == BINSON_ID_OK);
    assert(memcmp(rawval->bptr, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x46\x14\x14\x14\x14", rawval->bsize) == 0);
    assert(binson_parser_field_ensure_with_length(&p, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14", 20, BINSON_TYPE_STRING));
    assert(p.error_flags == BINSON_ID_OK);
    rawval = binson_parser_get_string_bbuf(&p);
    assert(p.error_flags == BINSON_ID_OK);
    assert(memcmp(rawval->bptr, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14", rawval->bsize) == 0);
    assert(binson_parser_field_ensure_with_length(&p, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x34", 20, BINSON_TYPE_STRING));
    assert(p.error_flags == BINSON_ID_OK);
    rawval = binson_parser_get_string_bbuf(&p);
    assert(p.error_flags == BINSON_ID_OK);
    assert(memcmp(rawval->bptr, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x15\x14\x14\x14\x14\x14\x14\x14\x14\x14", rawval->bsize) == 0);
    assert(binson_parser_field_ensure_with_length(&p, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x46\x3f\xef\xbf\xbd\x00\x00\x00\x00\x00\x00\x14\x14", 22, BINSON_TYPE_STRING));
    assert(p.error_flags == BINSON_ID_OK);
    rawval = binson_parser_get_string_bbuf(&p);
    assert(p.error_flags == BINSON_ID_OK);
    assert(memcmp(rawval->bptr, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x42\x42\x42\x42\x42\x43\x43\x43\x43\x43\x00", rawval->bsize) == 0);
    assert(!binson_parser_next(&p));
    assert(binson_parser_leave_object(&p));
    assert(p.error_flags == BINSON_ID_OK);
    return 0;
}

