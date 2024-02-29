#include "host_defines.h"
#include "m5ops.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>

volatile uint8_t *top = (uint8_t *)(TOP);
volatile UINT *ADDR_II = (volatile UINT *)(TOP + 1);
volatile UINT *ADDR_ABP = (volatile UINT *)(TOP + 9);
volatile UINT *ADDR_RESULT = (volatile UINT *)(TOP + 17);
volatile UINT *TOP_WINDOW_SIZE = (volatile UINT *)(TOP + 25);
volatile UINT *TOP_BS = (volatile UINT *)(TOP + 33);
volatile UINT *TOP_HAHA = (volatile UINT *)(TOP + 41);

void loadData() {
  Event *ii = (Event *)(BASE + II_OFFSET);
  Event *abp = (Event *)(BASE + ABP_OFFSET);
  Event *result = (Event *)(BASE + RESULT_OFFSET);
  UINT *xyz = (UINT *)(0x80c00000);

  printf("II ADDR %x\n", BASE + II_OFFSET);
  printf("ABP ADDR %x\n", BASE + ABP_OFFSET);
  printf("RESULT ADDR %x\n", BASE + RESULT_OFFSET);

  *ADDR_II = (UINT)(void *)ii;
  *ADDR_ABP = (UINT)(void *)abp;
  *ADDR_RESULT = (UINT)(void *)result;
  *TOP_HAHA = (UINT)(void *)xyz;
  *TOP_WINDOW_SIZE = WINDOW_SIZE;
}

int __attribute__((optimize("0"))) main(void) {
  m5_reset_stats();

  loadData();

  volatile int count = 0;

  *top = 1;
  while (*top != 0)
    count++;

  printf("Job complete\n");

  Event *results = (Event *)(BASE + RESULT_OFFSET);
  for (int i = 0; i < 10; i++) {
    printf("0x%16x 0x%16x\n", results[i].timestamp, results[i].value);
  }
  
  m5_dump_stats();
  m5_exit();
}
