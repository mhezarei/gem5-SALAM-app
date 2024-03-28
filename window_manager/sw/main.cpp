#include "host_defines.h"
#include "m5ops.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>

volatile uint8_t *top = (uint8_t *)(TOP);
volatile UINT *ADDR_II = (volatile UINT *)(TOP + 1);
volatile UINT *ADDR_ABP = (volatile UINT *)(TOP + 9);
volatile UINT *ADDR_RESULT_II = (volatile UINT *)(TOP + 17);
volatile UINT *ADDR_RESULT_ABP = (volatile UINT *)(TOP + 25);
volatile UINT *TOP_WINDOW_SIZE = (volatile UINT *)(TOP + 33);
volatile UINT *TOP_BS = (volatile UINT *)(TOP + 41);
volatile UINT *TOP_HAHA = (volatile UINT *)(TOP + 49);

void loadData() {
  INT *ii = (INT *)(BASE + II_OFFSET);
  INT *abp = (INT *)(BASE + ABP_OFFSET);
  INT *result_ii = (INT *)(BASE + RESULT_II_OFFSET);
  INT *result_abp = (INT *)(BASE + RESULT_ABP_OFFSET);
  UINT *xyz = (UINT *)(0x80c00000);

  for (int i = 0; i < NUM_POINTS; i++) {
    ii[i] = II[i];
    abp[i] = ABP[i];
  }

  printf("II ADDR %x\n", BASE + II_OFFSET);
  printf("ABP ADDR %x\n", BASE + ABP_OFFSET);
  printf("RESULT ADDR %x\n", BASE + RESULT_II_OFFSET);
  printf("RESULT ADDR %x\n", BASE + RESULT_ABP_OFFSET);

  *ADDR_II = (UINT)(void *)ii;
  *ADDR_ABP = (UINT)(void *)abp;
  *ADDR_RESULT_II = (UINT)(void *)result_ii;
  *ADDR_RESULT_ABP = (UINT)(void *)result_abp;
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

  // INT *results = (INT *)(ADDR_RESULT_II);
  // for (int i = 0; i < MAX_WINDOW_SIZE; i++) {
  //   printf("%d\n", results[i]);
  // }

  // results = (INT *)(ADDR_RESULT_ABP);
  // for (int i = 0; i < MAX_WINDOW_SIZE; i++) {
  //   printf("%d\n", results[i]);
  // }

  printf("0x%16x\n", *TOP_HAHA);

  m5_dump_stats();
  m5_exit();
}
