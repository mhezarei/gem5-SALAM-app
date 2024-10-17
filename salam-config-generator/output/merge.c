#include "../defines.h"

#define DATA_TYPE DOUBLE

void top(ADDR stream_to_0, ADDR stream_to_1, ADDR stream_to_2, ADDR stream_to) {
  while (1) {
    for (int i = 0; i < 3; i++) {
      DATA_TYPE timestamp, uid, age, sid;

      ADDR stream_from = i%3==0 ? stream_to_0 : i%3==1 ? stream_to_1 : stream_to_2;

      timestamp = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
      if (timestamp == END_TOKEN) {
        *((DATA_TYPE *)stream_to) = END_TOKEN;
        return;
      }
      uid = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
      age = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
      sid = (DATA_TYPE)(*((DATA_TYPE *)stream_from));

      *((DATA_TYPE *)stream_to) = (DATA_TYPE)timestamp;
      *((DATA_TYPE *)stream_to) = (DATA_TYPE)uid;
      *((DATA_TYPE *)stream_to) = (DATA_TYPE)age;
      *((DATA_TYPE *)stream_to) = (DATA_TYPE)sid;
    }
  }

  return;
}
