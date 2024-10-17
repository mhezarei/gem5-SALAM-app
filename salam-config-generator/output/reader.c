#include "../defines.h"

#define DATA_TYPE DOUBLE

void top(ADDR addr_from, ADDR stream_to) {
  for (int i = 0; i < NUM_CLICK_EVENTS; i++) {
    Record r = clicks[i];
    *((DATA_TYPE *)stream_to) = (DATA_TYPE)r.timestamp;
    *((DATA_TYPE *)stream_to) = (DATA_TYPE)r.uid;
    *((DATA_TYPE *)stream_to) = (DATA_TYPE)r.age;
    *((DATA_TYPE *)stream_to) = (DATA_TYPE)r.sid;
  }
  *((DATA_TYPE *)stream_to) = (DATA_TYPE)END_TOKEN;
  return;
}
