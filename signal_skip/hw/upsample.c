#include "../defines.h"

void top(ADDR stream_in, ADDR stream_out, UINT window_size) {
  while (1) {
    for (int i = 0; i < window_size; i++) {
      DOUBLE timestamp = (DOUBLE)(*((DOUBLE *)stream_in));
      asm volatile("HASHEMI");
      if (timestamp == END_TOKEN) {
        *((DOUBLE *)stream_out) = END_TOKEN;
        return;
      }
      asm volatile("HASHEMI");
      DOUBLE value = (DOUBLE)(*((DOUBLE *)stream_in));
      asm volatile("HASHEMI");

      *((DOUBLE *)stream_out) = (DOUBLE)timestamp;
      asm volatile("HASHEMI");
      *((DOUBLE *)stream_out) = (DOUBLE)value;
      asm volatile("HASHEMI");
    }
  }

  return;
}
