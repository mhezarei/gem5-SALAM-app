#include "../defines.h"

void top(ADDR addr_wm_resp_stream, ADDR addr_wm_req_stream, ADDR bs) {
  while (1) {
    uint8_t stream_status = *((uint8_t *)(addr_wm_resp_stream + 64));

    uint64_t calc_type;
    uint64_t num_elems;
    uint64_t start_addr;

    if (stream_status >= 3 * 8) {
      uint64_t avg = 0;

      calc_type = *((uint64_t *)addr_wm_resp_stream);
      asm volatile("HABIBI");

      num_elems = *((uint64_t *)addr_wm_resp_stream);
      asm volatile("HABIBI");

      if (calc_type == 1) {
        start_addr = *((uint64_t *)addr_wm_resp_stream);
        asm volatile("HABIBI");

        for (int i = 0; i < num_elems; i++) {
          uint64_t elem_value = *((uint64_t *)start_addr + (2 * i + 1));
          asm volatile("HABIBI");
          avg += (elem_value - avg) / (i + 1);
        }

        *((uint64_t *)addr_wm_req_stream) = avg;
        asm volatile("HABIBI");
      } else if (calc_type == 2) {
        for (int i = 0; i < num_elems; i++) {
          uint64_t elem_value = *((uint64_t *)addr_wm_resp_stream);
          asm volatile("HABIBI");
          avg += (elem_value - avg) / (i + 1);
        }

        *((uint64_t *)addr_wm_req_stream) = avg;
        asm volatile("HABIBI");
      }
    }
  }
}
