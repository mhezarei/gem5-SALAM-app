#include "../defines.h"

#define DATA_TYPE uint64_t

void top(ADDR stream_from, ADDR stream_to_0, ADDR stream_to_1, ADDR stream_to_2) {
  while (1) {
    // initialize record
    DATA_TYPE timestamp, uid, age, sid;

    // read parts
    timestamp = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
    if (timestamp == END_TOKEN) {
			*((DATA_TYPE *)stream_to_0) = END_TOKEN;
			*((DATA_TYPE *)stream_to_1) = END_TOKEN;
			*((DATA_TYPE *)stream_to_2) = END_TOKEN;
      return;
    }
    asm volatile("HASHEMI");
    uid = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
    asm volatile("HASHEMI");
    age = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
    asm volatile("HASHEMI");
    sid = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
    asm volatile("HASHEMI");

    ADDR stream_to = age<20 ? stream_to_0 : age<30 ? stream_to_1 : stream_to_2;

    *((DATA_TYPE *)stream_to) = (DATA_TYPE)timestamp;
    asm volatile("HASHEMI");
    *((DATA_TYPE *)stream_to) = (DATA_TYPE)uid;
    asm volatile("HASHEMI");
    *((DATA_TYPE *)stream_to) = (DATA_TYPE)age;
    asm volatile("HASHEMI");
    *((DATA_TYPE *)stream_to) = (DATA_TYPE)sid;
  }

  return;
}
