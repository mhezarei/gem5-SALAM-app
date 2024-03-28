#include "../defines.h"

volatile uint8_t *FLAGS_PE1 = (uint8_t *)(PE1);
volatile ADDR *ADDR_PE1_IN = (volatile ADDR *)(PE1 + 1);
volatile UINT *ADDR_PE1_WM_STREAM = (volatile UINT *)(PE1 + 9);
volatile UINT *ADDR_WM_PE1_STREAM = (volatile UINT *)(PE1 + 17);
volatile UINT *PE1_WINDOW_SIZE = (volatile UINT *)(PE1 + 25);
volatile UINT *PE1_BS = (volatile UINT *)(PE1 + 33);
volatile UINT *PE1_RESULT = (volatile UINT *)(PE1 + 41);

volatile uint8_t *FLAGS_PE2 = (uint8_t *)(PE2);
volatile ADDR *ADDR_PE2_IN = (volatile ADDR *)(PE2 + 1);
volatile UINT *ADDR_PE2_WM_STREAM = (volatile UINT *)(PE2 + 9);
volatile UINT *ADDR_WM_PE2_STREAM = (volatile UINT *)(PE2 + 17);
volatile UINT *PE2_WINDOW_SIZE = (volatile UINT *)(PE2 + 25);
volatile UINT *PE2_BS = (volatile UINT *)(PE2 + 33);
volatile UINT *PE2_RESULT = (volatile UINT *)(PE2 + 41);

volatile uint8_t *FLAGS_WM = (uint8_t *)(WM);

void top(ADDR addr_ii, ADDR addr_abp, ADDR addr_result_ii, ADDR addr_result_abp,
         UINT window_size, UINT *bs, ADDR haha) {
  *FLAGS_WM = DEV_INIT;

  *((uint64_t *)haha) = addr_ii;

  *ADDR_PE1_IN = (ADDR)addr_ii;
  *ADDR_PE1_WM_STREAM = (ADDR)stream_pe1_wm;
  *ADDR_WM_PE1_STREAM = (ADDR)stream_wm_pe1;
  *PE1_RESULT = (ADDR)addr_result_ii;
  *PE1_WINDOW_SIZE = window_size;
  *FLAGS_PE1 = DEV_INIT;

  *ADDR_PE2_IN = (ADDR)addr_abp;
  *ADDR_PE2_WM_STREAM = (ADDR)stream_pe2_wm;
  *ADDR_WM_PE2_STREAM = (ADDR)stream_wm_pe2;
  *PE2_RESULT = (ADDR)addr_result_abp;
  *PE2_WINDOW_SIZE = window_size;
  *FLAGS_PE2 = DEV_INIT;

  while ((*FLAGS_PE1 & DEV_INTR) != DEV_INTR)
    ;
  while ((*FLAGS_PE2 & DEV_INTR) != DEV_INTR)
    ;

  return;
}
