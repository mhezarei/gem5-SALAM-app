#include "host_defines.h"
#include "m5ops.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>

volatile uint8_t *top = (uint8_t *)(TOP);
volatile UINT *TOP_BS = (volatile UINT *)(TOP + 1);

void loadData() {
  Core *cores = (Core *)(BASE + CORES_OFFSET);
  Point *values = (Point *)(BASE + VALUES_OFFSET);

  for (int i = 0; i < NUM_CORES; i++) {
    cores[i] = CORES[i];
  }
  for (int i = 0; i < NUM_VALUES; i++) {
    values[i] = VALUES[i];
  }

  printf("CORES ADDR %x\n", BASE + CORES_OFFSET);
  printf("VALUES ADDR %x\n", BASE + VALUES_OFFSET);
}

int __attribute__((optimize("0"))) main(void) {
  m5_reset_stats();

  loadData();

  volatile int count = 0;

  *top = 1;
  while (*top != 0)
    count++;

  printf("Job complete\n");

  m5_dump_stats();
  m5_exit();
}
