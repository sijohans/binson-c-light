#include <assert.h>
#include <string.h>
#include "binson_writer.h"

/*
{
  "000": [
    "0",
    48,
    "0x303030303030303030303030303030303030303030303030",
    "0x3030302e3030303030303030303030308000000030303030",
    "0x303030303030303030303030303030303030303030303030",
    "0x303030303030303030303030303030303030303030303030",
    "0x303030303030303030303030303030303030303030303030",
    false,
    "0x303030303030303030303030303030303030303030303030",
    "0x303030303030303030303030303030303030303030303030",
    "0x303030303030303030303030301000303030303030303030",
    "0x303030303030303030303030303030303030303030303030",
    48,
    3472328296227680304
  ]
}
*/
int main(void)
{
    uint8_t expected[260] = "\x40\x14\x03\x30\x30\x30\x42\x14\x01\x30\x10\x30\x18\x18\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x18\x18\x30\x30\x30\x2e\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x80\x00\x00\x00\x30\x30\x30\x30\x18\x18\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x18\x18\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x18\x18\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x45\x18\x18\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x18\x18\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x18\x18\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x10\x00\x30\x30\x30\x30\x30\x30\x30\x30\x30\x18\x18\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x10\x30\x13\x30\x30\x30\x30\x30\x30\x30\x30\x43\x41";
    uint8_t created[260];
    binson_writer w;
    binson_writer_init(&w, created, sizeof(created));
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x30\x30\x30", 3);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x30", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_integer(&w, 48);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_bytes(&w, (uint8_t *)"\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30", 24);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_bytes(&w, (uint8_t *)"\x30\x30\x30\x2e\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x80\x00\x00\x00\x30\x30\x30\x30", 24);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_bytes(&w, (uint8_t *)"\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30", 24);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_bytes(&w, (uint8_t *)"\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30", 24);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_bytes(&w, (uint8_t *)"\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30", 24);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_bytes(&w, (uint8_t *)"\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30", 24);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_bytes(&w, (uint8_t *)"\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30", 24);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_bytes(&w, (uint8_t *)"\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x10\x00\x30\x30\x30\x30\x30\x30\x30\x30\x30", 24);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_bytes(&w, (uint8_t *)"\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30", 24);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_integer(&w, 48);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_integer(&w, 3472328296227680304);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    assert(memcmp(expected, created, sizeof(expected)) == 0);
    return 0;
}
