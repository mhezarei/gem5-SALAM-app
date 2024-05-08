#include "host_defines.h"
#include "m5ops.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>

volatile uint8_t *top = (uint8_t *)(TOP);
volatile UINT *TOP_BS = (volatile UINT *)(TOP + 1);

int __attribute__((optimize("0"))) main(void) {
  m5_reset_stats();

  volatile int count = 0;
  *top = 1;
  while (*top != 0)
    count++;

  printf("Job complete\n");

  m5_dump_stats();
  m5_exit();
}
