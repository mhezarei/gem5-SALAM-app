#include "../defines.h"

#define DATA_TYPE uint64_t

void top(ADDR stream_from, ADDR stream_to) {
  while (1) {
    // initialize record
    DATA_TYPE timestamp, uid, age, sid;

    // read parts
    timestamp = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
    if (timestamp == END_TOKEN) {
      *((DATA_TYPE *)stream_to) = END_TOKEN;
      return;
    }
    asm volatile("HASHEMI");
    uid = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
    asm volatile("HASHEMI");
    age = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
    asm volatile("HASHEMI");
    sid = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
    asm volatile("HASHEMI");

    DATA_TYPE x = age*3;

    *((DATA_TYPE *)stream_to) = (DATA_TYPE)timestamp;
    asm volatile("HASHEMI");
    *((DATA_TYPE *)stream_to) = (DATA_TYPE)uid;
    asm volatile("HASHEMI");
    *((DATA_TYPE *)stream_to) = x;
    asm volatile("HASHEMI");

    while (*((uint8_t *)(stream_to + 64)) > 0) ;
    asm volatile("HASHEMI");
    
    *((DATA_TYPE *)stream_to) = (DATA_TYPE)sid;
    asm volatile("HASHEMI");
  }

  return;
}
