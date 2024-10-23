#include "../defines.h"

#define DATA_TYPE uint64_t

void top(ADDR stream_from_0, ADDR stream_from_1, ADDR stream_from_2, ADDR stream_to) {
  int done_0 = 0;
  int done_1 = 0;
  int done_2 = 0;
  while (1) {
    if (done_0 == 1 && done_1 == 1 && done_2 == 1) {
      *((DATA_TYPE *)stream_to) = END_TOKEN;
      return;
    }
    asm volatile("HASHEMI");

    for (int i = 0; i < 3; i++) {
      if (i == 0 && done_0 == 1) {
        continue;
      } else if (i == 1 && done_1 == 1) {
        continue;
      } else if (i == 2 && done_2 == 1)
        continue;

      DATA_TYPE timestamp, uid, age, sid;

      ADDR stream_from = i%3==0 ? stream_from_0 : i%3==1 ? stream_from_1 : stream_from_2;
      asm volatile("HASHEMI");

      // does the selected stream have any data?
      uint8_t stream_from_status = *((uint8_t *)(stream_from + 64));
      asm volatile("HASHEMI");
      if (stream_from_status == 0)
        continue;
      asm volatile("HASHEMI");

      timestamp = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
      if (timestamp == END_TOKEN) {
        if (i == 0) {
          done_0 = 1;
        } else if (i == 1) {
          done_1 = 1;
        } else {
          done_2 = 1;
        }
        break;
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
