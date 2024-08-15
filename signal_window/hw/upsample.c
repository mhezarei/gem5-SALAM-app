#include "../defines.h"

void top(ADDR stream_in, ADDR stream_out, UINT window_size) {
  while (1) {
    for (int i = 0; i < window_size; i++) {
      Event e = (struct Event){(DOUBLE)-1, (DOUBLE)-1};
      e.timestamp = (DOUBLE)(*((DOUBLE *)stream_in));

      if (e.timestamp == END_TOKEN) {
        *((DOUBLE *)stream_out) = END_TOKEN;
        return;
      }

      e.value = (DOUBLE)(*((DOUBLE *)stream_in));

      *((DOUBLE *)stream_out) = (DOUBLE)e.timestamp;
      *((DOUBLE *)stream_out) = (DOUBLE)e.value;
    }
  }

  return;
}
