NUM_CALC_UNITS = 64
NUM_PE_UNITS = 16


s = """#include "../defines.h"

"""

for i in range(1, NUM_PE_UNITS + 1):
    s += f"""// volatile uint8_t *FLAGS_PE{i} = (uint8_t *)(PE{i});
// volatile UINT *ADDR_PE{i}_WM_STREAM = (volatile UINT *)(PE{i} + 1);
// volatile UINT *ADDR_WM_PE{i}_STREAM = (volatile UINT *)(PE{i} + 9);
// volatile UINT *ADDR_PE{i}_BS = (volatile UINT *)(PE{i} + 17);

"""

for i in range(1, NUM_CALC_UNITS + 1):
    s += f"""volatile uint8_t *FLAGS_CALC{i} = (uint8_t *)(CALC{i});
volatile UINT *ADDR_WM_CALC{i}_STREAM = (volatile UINT *)(CALC{i} + 1);
volatile UINT *ADDR_CALC{i}_WM_STREAM = (volatile UINT *)(CALC{i} + 9);
volatile UINT *ADDR_CALC{i}_BS = (volatile UINT *)(CALC{i} + 17);

"""

s += """volatile uint8_t *FLAGS_WM = (uint8_t *)(WM);

void top(UINT *bs) {
  *FLAGS_WM = DEV_INIT;
  
  *((uint64_t *)bs) = (uint64_t)0x19241059184;

"""

for i in range(1, NUM_PE_UNITS + 1):
    s += f"""  // *ADDR_PE{i}_WM_STREAM = (ADDR)stream_pe{i}_wm;
  // *ADDR_WM_PE{i}_STREAM = (ADDR)stream_wm_pe{i};
  // *ADDR_PE{i}_BS = (ADDR)bs;
  // *FLAGS_PE{i} = DEV_INIT;

"""

for i in range(1, NUM_CALC_UNITS + 1):
    s += f"""  *ADDR_WM_CALC{i}_STREAM = (ADDR)stream_wm_calc{i};
  *ADDR_CALC{i}_WM_STREAM = (ADDR)stream_calc{i}_wm;
  *ADDR_CALC{i}_BS = (ADDR)bs;
  *FLAGS_CALC{i} = DEV_INIT;
"""

s += """  
  while ((*FLAGS_WM & DEV_INTR) != DEV_INTR)
    ;

  return;
}
"""

print(s)
