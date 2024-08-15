#include "../defines.h"

void top(ADDR stream_in_1, ADDR stream_in_2, ADDR addr_out, UINT window_size) {
  UINT window_pos = 0;

  while (1) {
    for (int i = 0; i < window_size; i++) {
      DOUBLE timestamp_1 = (DOUBLE)(*((DOUBLE *)stream_in_1));
      asm volatile("HASHEMI");

      if (timestamp_1 == END_TOKEN)
        return;
      asm volatile("HASHEMI");

      DOUBLE value_1 = (DOUBLE)(*((DOUBLE *)stream_in_1));
      asm volatile("HASHEMI");

      DOUBLE timestamp_2 = (DOUBLE)(*((DOUBLE *)stream_in_2));
      asm volatile("HASHEMI");

      if (timestamp_2 == END_TOKEN)
        return;
      asm volatile("HASHEMI");

      DOUBLE value_2 = (DOUBLE)(*((DOUBLE *)stream_in_2));
      asm volatile("HASHEMI");

      ((Event *)(addr_out))[window_pos + i] = (struct Event){
          (DOUBLE)timestamp_1 == timestamp_2 ? timestamp_1 : timestamp_2,
          (DOUBLE)(value_1 + value_2)};
      asm volatile("HASHEMI");
    }

    window_pos += window_size;
  }

  return;
}
