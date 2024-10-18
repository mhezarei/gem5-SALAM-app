#include "../defines.h"

#define DATA_TYPE uint64_t

void top(ADDR addr_from, ADDR stream_to) {
  for (int i = 0; i < NUM_CLICK_EVENTS; i++) {
    Record r = ((Record *)addr_from)[i];
    *((DATA_TYPE *)stream_to) = (DATA_TYPE)r.timestamp;
    asm volatile("HASHEMI");
    *((DATA_TYPE *)stream_to) = (DATA_TYPE)r.uid;
    asm volatile("HASHEMI");
    *((DATA_TYPE *)stream_to) = (DATA_TYPE)r.age;
    asm volatile("HASHEMI");
    *((DATA_TYPE *)stream_to) = (DATA_TYPE)r.sid;
    asm volatile("HASHEMI");
  }
  *((DATA_TYPE *)stream_to) = (DATA_TYPE)END_TOKEN;
  return;
}
