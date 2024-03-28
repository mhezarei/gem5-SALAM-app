#include "../defines.h"

void top(ADDR addr_in, ADDR addr_wm_req_stream, ADDR addr_wm_resp_stream,
         UINT window_size, ADDR bs, ADDR addr_result) {
  int window_pos = 0;
  while (1) {
    uint8_t stream_status = *((uint8_t *)(addr_wm_resp_stream + 64));

    if (window_pos == 0) {
      // send next request
      UINT start = window_pos;
      UINT len = window_size;

      uint64_t pe_req =
          (uint64_t)(((((uint64_t)addr_in) << 32) & 0xFFFFFFFF00000000) |
                     ((((uint64_t)start) << 16) & 0x00000000FFFF0000) |
                     (((uint64_t)window_size) & 0x000000000000FFFF));

      for (int i = 0; i < 30; i++)
        *((uint64_t *)addr_wm_req_stream) = pe_req;

      window_pos += window_size;
    } else if (stream_status == 0) {
      continue;
    } else {
      // work on spm data
      UINT spm_addr = *((UINT *)addr_wm_resp_stream);

#pragma unroll WINDOW_SIZE
      for (int i = 0; i < window_size; i++) {
        *((INT *)addr_result) = ((INT *)spm_addr)[i];
      }

      // check before sending the next request
      if (window_pos == MAX_WINDOW_SIZE) {
        *((uint64_t *)addr_wm_req_stream) = END_TOKEN;
        return;
      }

      // send next request
      UINT start = window_pos;
      UINT len = window_size;

      uint64_t pe_req =
          (uint64_t)(((((uint64_t)addr_in) << 32) & 0xFFFFFFFF00000000) |
                     ((((uint64_t)start) << 16) & 0x00000000FFFF0000) |
                     (((uint64_t)window_size) & 0x000000000000FFFF));

      for (int i = 0; i < 30; i++)
        *((uint64_t *)addr_wm_req_stream) = pe_req;

      window_pos += window_size;
    }
  }
}
