#include "../defines.h"

void top(ADDR stream_in, ADDR stream_out, ADDR spm, UINT window_size) {
  DOUBLE avg = 0.0;
  int num_window_nnz = 0;

  while (1) {
    avg = 0.0;
    num_window_nnz = 1;

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

      *(((DOUBLE *)spm) + 2 * i) = (DOUBLE)timestamp;
      asm volatile("HASHEMI");
      *(((DOUBLE *)spm) + 2 * i + 1) = (DOUBLE)value;
      asm volatile("HASHEMI");

      if (value != 0.0) {
        avg += ((DOUBLE)value - avg) / num_window_nnz;
        asm volatile("HASHEMI");
        num_window_nnz++;
        asm volatile("HASHEMI");
      }
      asm volatile("HASHEMI");
    }

    for (int i = 0; i < window_size; i++) {
      DOUBLE timestamp = *(((DOUBLE *)spm) + 2 * i);
      asm volatile("HASHEMI");
      DOUBLE value = *(((DOUBLE *)spm) + 2 * i + 1);
      asm volatile("HASHEMI");

      *((DOUBLE *)stream_out) = (DOUBLE)timestamp;
      asm volatile("HASHEMI");
      *((DOUBLE *)stream_out) = value == 0.0 ? (DOUBLE)avg : (DOUBLE)value;
      asm volatile("HASHEMI");
    }
  }

  return;
}
