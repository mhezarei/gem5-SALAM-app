#include "../defines.h"

#define DATA_TYPE DOUBLE

void top(ADDR stream_from, ADDR stream_to) {
  while (1) {
    // initialize record
    Record r = (struct Record){(DATA_TYPE)-1,(DATA_TYPE)-1,(DATA_TYPE)-1,(DATA_TYPE)-1,};

    // read parts
    r.timestamp = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
    if (r.timestamp == END_TOKEN) {
      *((DATA_TYPE *)stream_to) = END_TOKEN;
      return;
    }
    r.uid = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
    r.age = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
    r.sid = (DATA_TYPE)(*((DATA_TYPE *)stream_from));

    if (r.age<15) {
      *((DATA_TYPE *)stream_to) = (DATA_TYPE)r.timestamp;
      *((DATA_TYPE *)stream_to) = (DATA_TYPE)r.uid;
      *((DATA_TYPE *)stream_to) = (DATA_TYPE)r.age;
      *((DATA_TYPE *)stream_to) = (DATA_TYPE)r.sid;
    }
  }

  return;
}
