#include "../defines.h"

volatile uint8_t *FLAGS_PE = (uint8_t *)(PE);
volatile UINT *ADDR_PE_WM_STREAM = (volatile UINT *)(PE + 1);
volatile UINT *ADDR_WM_PE_STREAM = (volatile UINT *)(PE + 9);
volatile UINT *ADDR_PE_BS = (volatile UINT *)(PE + 17);

volatile uint8_t *FLAGS_CALC = (uint8_t *)(CALC);
volatile UINT *ADDR_WM_CALC_STREAM = (volatile UINT *)(CALC + 1);
volatile UINT *ADDR_CALC_WM_STREAM = (volatile UINT *)(CALC + 9);
volatile UINT *ADDR_CALC_BS = (volatile UINT *)(CALC + 17);

volatile uint8_t *FLAGS_WM = (uint8_t *)(WM);

void top(UINT *bs) {
  *FLAGS_WM = DEV_INIT;

  *((uint64_t *)bs) = (uint64_t)0x19241059184;

  *ADDR_PE_WM_STREAM = (ADDR)stream_pe_wm;
  *ADDR_WM_PE_STREAM = (ADDR)stream_wm_pe;
  *ADDR_PE_BS = (ADDR)bs;
  *FLAGS_PE = DEV_INIT;

  *ADDR_WM_CALC_STREAM = (ADDR)stream_wm_calc;
  *ADDR_CALC_WM_STREAM = (ADDR)stream_calc_wm;
  *ADDR_CALC_BS = (ADDR)bs;
  *FLAGS_CALC = DEV_INIT;

  // while ((*FLAGS_PE & DEV_INTR) != DEV_INTR)
  //   ;
  // while ((*FLAGS_CALC & DEV_INTR) != DEV_INTR)
  //   ;
  while ((*FLAGS_WM & DEV_INTR) != DEV_INTR)
    ;

  return;
}
