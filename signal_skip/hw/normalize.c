#include "../defines.h"

void top(ADDR stream_in, ADDR stream_out, ADDR spm, UINT window_size) {
  while (1) {
    DOUBLE avg = 0.0;
    DOUBLE bro_sum = 0.0;
    DOUBLE variance = 0.0;

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

      if (value != 0.0)
        avg += (value - avg) / (i + 1);
      asm volatile("HASHEMI");
    }

    for (int i = 0; i < window_size; i++) {
      DOUBLE value = *(((DOUBLE *)spm) + 2 * i + 1);
      asm volatile("HASHEMI");
      if (value != 0.0)
        bro_sum += (value - avg) * (value - avg);
      asm volatile("HASHEMI");
    }
    variance = bro_sum / window_size;
    asm volatile("HASHEMI");

    for (int i = 0; i < window_size; i++) {
      DOUBLE value = *(((DOUBLE *)spm) + 2 * i + 1);
      asm volatile("HASHEMI");
      *(((DOUBLE *)spm) + 2 * i + 1) = (value - avg) / variance;
      asm volatile("HASHEMI");
    }

    for (int i = 0; i < window_size; i++) {
      DOUBLE timestamp = *(((DOUBLE *)spm) + 2 * i);
      asm volatile("HASHEMI");
      DOUBLE value = *(((DOUBLE *)spm) + 2 * i + 1);
      asm volatile("HASHEMI");

      *((DOUBLE *)stream_out) = (DOUBLE)timestamp;
      asm volatile("HASHEMI");
      *((DOUBLE *)stream_out) = (DOUBLE)(value);
      asm volatile("HASHEMI");
    }
  }

  return;
}
