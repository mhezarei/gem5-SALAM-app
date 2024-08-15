#include "../defines.h"

void top(ADDR addr_1, ADDR addr_2, ADDR stream_out_1, ADDR stream_out_2) {
  for (int i = 0; i < NUM_POINTS; i++) {
    Event e1 = ((Event *)(addr_1))[i];
    *((DOUBLE *)stream_out_1) = (DOUBLE)e1.timestamp;
    asm volatile("HASHEMI");
    *((DOUBLE *)stream_out_1) = (DOUBLE)e1.value;
    asm volatile("HASHEMI");

    Event e2 = ((Event *)(addr_2))[i];
    *((DOUBLE *)stream_out_2) = (DOUBLE)e2.timestamp;
    asm volatile("HASHEMI");
    *((DOUBLE *)stream_out_2) = (DOUBLE)e2.value;
    asm volatile("HASHEMI");

    if ((i + 1) % WINDOW_SIZE == 0) {
      *((DOUBLE *)stream_out_1) = STOP_TOKEN;
      asm volatile("HASHEMI");
      *((DOUBLE *)stream_out_2) = STOP_TOKEN;
    }
    asm volatile("HASHEMI");
  }

  *((DOUBLE *)stream_out_1) = END_TOKEN;
  asm volatile("HASHEMI");
  *((DOUBLE *)stream_out_2) = END_TOKEN;
  asm volatile("HASHEMI");

  return;
}
