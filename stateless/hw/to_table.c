#include "../defines.h"

#define DATA_TYPE uint64_t

void top(ADDR stream_from, ADDR table_to) {
  while (1) {
    DATA_TYPE timestamp, uid, age, sid;

    timestamp = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
    if (timestamp == END_TOKEN) {
      *((DATA_TYPE *)table_to) = END_TOKEN;
      return;
    }
    asm volatile("HASHEMI");
    uid = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
    asm volatile("HASHEMI");
    age = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
    asm volatile("HASHEMI");
    sid = (DATA_TYPE)(*((DATA_TYPE *)stream_from));

    *((DATA_TYPE *)table_to) = (DATA_TYPE)timestamp;
    asm volatile("HASHEMI");
    *((DATA_TYPE *)table_to) = (DATA_TYPE)uid;
    asm volatile("HASHEMI");
    *((DATA_TYPE *)table_to) = (DATA_TYPE)age;
    asm volatile("HASHEMI");
    *((DATA_TYPE *)table_to) = (DATA_TYPE)sid;
  }

  return;
}
