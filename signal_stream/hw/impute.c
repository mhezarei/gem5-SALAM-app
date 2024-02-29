#include "../defines.h"

void top(ADDR addr_in, ADDR stream_out, UINT window_size) {
  DOUBLE avg = 0.0;
  int num_window_nnz = 0;

  for (int window_pos = 0; window_pos < MAX_WINDOW_SIZE;
       window_pos += window_size) {
    avg = 0.0;
    num_window_nnz = 1;

    for (int i = 0; i < window_size; i++) {
      Event e = ((Event *)(addr_in))[window_pos + i];
      if (e.value != 0.0) {
        avg += ((DOUBLE)e.value - avg) / num_window_nnz;
        num_window_nnz++;
      }
    }

    for (int i = 0; i < window_size; i++) {
      Event e_ii = ((Event *)(addr_in))[window_pos + i];
      for (int j2 = 0; j2 < 3; j2++)
        *((DOUBLE *)stream_out) = (DOUBLE)e_ii.timestamp;
      *((DOUBLE *)stream_out) =
          e_ii.value == 0.0 ? (DOUBLE)avg : (DOUBLE)e_ii.value;
    }
  }

  *((DOUBLE *)stream_out) = END_TOKEN;

  return;
}
