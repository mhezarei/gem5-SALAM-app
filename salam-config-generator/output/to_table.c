#include "../defines.h"

#define DATA_TYPE DOUBLE

void top(ADDR stream_from, ADDR table_to) {
  while (1) {
    DATA_TYPE timestamp, uid, age, sid;

    timestamp = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
    if (timestamp == END_TOKEN) {
      *((DATA_TYPE *)stream_to) = END_TOKEN;
      return;
    }
    uid = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
    age = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
    sid = (DATA_TYPE)(*((DATA_TYPE *)stream_from));

    *((DATA_TYPE *)table_to) = (DATA_TYPE)timestamp;
    *((DATA_TYPE *)table_to) = (DATA_TYPE)uid;
    *((DATA_TYPE *)table_to) = (DATA_TYPE)age;
    *((DATA_TYPE *)table_to) = (DATA_TYPE)sid;
  }

  return;
}
