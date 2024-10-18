#include "host_defines.h"
#include "m5ops.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>

volatile uint8_t *top = (uint8_t *)(TOP);
volatile UINT *ADDR_CLICKS = (volatile UINT *)(TOP + 1);
volatile UINT *ADDR_TABLE = (volatile UINT *)(TOP + 9);

void loadConfig() {
  Record *clicks = (Record *)(BASE + CLICKS_OFFSET);
  Record *table = (Record *)(BASE + TABLE_OFFSET);

  printf("CLICKS ADDR %x\n", BASE + CLICKS_OFFSET);
  printf("TABLE ADDR %x\n", BASE + TABLE_OFFSET);

  *ADDR_CLICKS = (UINT)(void *)clicks;
  *ADDR_TABLE = (UINT)(void *)table;
}

int __attribute__((optimize("0"))) main(void) {
  m5_reset_stats();

  loadConfig();

  volatile int count = 0;

  *top = 1;
  while (*top != 0)
    count++;

  printf("Job complete\n");

  Record *results = (Record *)(BASE + TABLE_OFFSET);
  for (int i = 0; i < 10; i++) {
    printf("0x%16x 0x%16x 0x%16x 0x%16x\n", results[i].timestamp,
           results[i].uid, results[i].age, results[i].sid);
  }

  m5_dump_stats();
  m5_exit();
}
