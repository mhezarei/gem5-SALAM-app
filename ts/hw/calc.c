#include "../defines.h"

void top(ADDR addr_wm_resp_stream, ADDR addr_wm_req_stream, ADDR bs) {
  while (1) {
    uint8_t stream_status = *((uint8_t *)(addr_wm_resp_stream + 64));

    if (stream_status < 3 * 8) {
      continue;
    } else {
      uint64_t calc_type = *((uint64_t *)addr_wm_resp_stream);
      *((uint64_t *)bs) = calc_type;
      uint64_t num_elems = *((uint64_t *)addr_wm_resp_stream);
      *((uint64_t *)bs) = num_elems;

      if (calc_type == 1) {
        uint64_t start_addr;
        start_addr = *((uint64_t *)addr_wm_resp_stream);
        *((uint64_t *)bs) = start_addr;

        uint64_t avg = 0;
        for (int i = 0; i < num_elems; i++) {
          uint64_t elem_value = *((uint64_t *)start_addr + (2 * i + 1));
          *((uint64_t *)bs) = elem_value;
          avg += (elem_value - avg) / (i + 1);
        }

        for (int i = 0; i < 30; i++)
          *((uint64_t *)addr_wm_req_stream) = avg;
      } else if (calc_type == 2) {
        uint64_t avg = 0;
        for (int i = 0; i < num_elems; i++) {
          uint64_t elem_value = *((uint64_t *)addr_wm_resp_stream);
          *((uint64_t *)bs) = elem_value;
          avg += (elem_value - avg) / (i + 1);
        }

        for (int i = 0; i < 30; i++)
          *((uint64_t *)addr_wm_req_stream) = avg;
      }
    }
  }
}
