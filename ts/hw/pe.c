#include "../defines.h"

void top(ADDR addr_wm_req_stream, ADDR addr_wm_resp_stream) {
  for (int i = 0; i < 30; i++)
    *((uint64_t *)addr_wm_req_stream) = 0;

  for (int i = 0; i < 30; i++)
    *((uint64_t *)addr_wm_req_stream) = 191;
}
