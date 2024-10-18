#include "../defines.h"

#define DATA_TYPE uint64_t

void top(ADDR stream_from_0, ADDR stream_from_1, ADDR stream_from_2, ADDR stream_to) {
  while (1) {
    for (int i = 0; i < 3; i++) {
      DATA_TYPE timestamp, uid, age, sid;

      ADDR stream_from = i%3==0 ? stream_from_0 : i%3==1 ? stream_from_1 : stream_from_2;

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
