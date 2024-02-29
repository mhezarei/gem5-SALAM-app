#include "../defines.h"

void top(ADDR stream_in, ADDR stream_out, ADDR spm, UINT window_size) {
  while (1) {
    DOUBLE avg = 0.0;
    DOUBLE bro_sum = 0.0;
    DOUBLE variance = 0.0;

    for (int i = 0; i < window_size; i++) {
      DOUBLE timestamp, value;
      for (int j2 = 0; j2 < 1; j2++)
        timestamp = (DOUBLE)(*((DOUBLE *)stream_in));

      if (timestamp == END_TOKEN) {
        *((DOUBLE *)stream_out) = END_TOKEN;
        return;
      }

      for (int j2 = 0; j2 < 1; j2++)
        value = (DOUBLE)(*((DOUBLE *)stream_in));

      for (int j2 = 0; j2 < 1; j2++)
        *(((DOUBLE *)spm) + 2 * i) = (DOUBLE)timestamp;
      for (int j2 = 0; j2 < 1; j2++)
        *(((DOUBLE *)spm) + 2 * i + 1) = (DOUBLE)value;

      if (value != 0.0)
        avg += (value - avg) / (i + 1);
    }

    for (int i = 0; i < window_size; i++) {
      DOUBLE value;
      for (int j2 = 0; j2 < 1; j2++)
        value = *(((DOUBLE *)spm) + 2 * i + 1);
      if (value != 0.0)
        bro_sum += (value - avg) * (value - avg);
    }
    variance = bro_sum / window_size;

    for (int i = 0; i < window_size; i++) {
      DOUBLE value = *(((DOUBLE *)spm) + 2 * i + 1);
      *(((DOUBLE *)spm) + 2 * i + 1) = (value - avg) / variance;
    }

    for (int i = 0; i < window_size; i++) {
      DOUBLE timestamp = 0, value = 0;

      for (int j2 = 0; j2 < 100; j2++)
        timestamp = *(((DOUBLE *)spm) + 2 * i);
      for (int j2 = 0; j2 < 100; j2++)
        value = *(((DOUBLE *)spm) + 2 * i + 1);

      for (int j2 = 0; j2 < 3; j2++)
        *((DOUBLE *)stream_out) = (DOUBLE)timestamp;
      *((DOUBLE *)stream_out) = (DOUBLE)(value);
    }
  }

  return;
}
