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

    if (age>30) {
      *((DATA_TYPE *)stream_to) = (DATA_TYPE)timestamp;
      asm volatile("HASHEMI");
      *((DATA_TYPE *)stream_to) = (DATA_TYPE)uid;
      asm volatile("HASHEMI");
      *((DATA_TYPE *)stream_to) = (DATA_TYPE)age;
      asm volatile("HASHEMI");
      *((DATA_TYPE *)stream_to) = (DATA_TYPE)sid;
    }
  }

  return;
}
