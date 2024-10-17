#include "../defines.h"

#define DATA_TYPE DOUBLE

void top(ADDR stream_from, ADDR stream_to_0, ADDR stream_to_1, ADDR stream_to_2) {
  while (1) {
    // initialize record
    DATA_TYPE timestamp, uid, age, sid;

    // read parts
    timestamp = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
    if (timestamp == END_TOKEN) {
      *((DATA_TYPE *)stream_to) = END_TOKEN;
      return;
    }
    uid = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
    age = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
    sid = (DATA_TYPE)(*((DATA_TYPE *)stream_from));

    ADDR stream_to = age<20 ? stream_to_0 : age<30 ? stream_to_1 : stream_to_2;

    *((DATA_TYPE *)stream_to) = (DATA_TYPE)timestamp;
    *((DATA_TYPE *)stream_to) = (DATA_TYPE)uid;
    *((DATA_TYPE *)stream_to) = (DATA_TYPE)age;
    *((DATA_TYPE *)stream_to) = (DATA_TYPE)sid;
  }

  return;
}
