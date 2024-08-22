#include "../defines.h"

volatile uint8_t *FLAGS_JOIN_READER = (uint8_t *)(JOIN_READER);
volatile UINT *ADDR_JOIN_READER_A = (volatile UINT *)(JOIN_READER + 1);
volatile UINT *ADDR_JOIN_READER_B = (volatile UINT *)(JOIN_READER + 9);
volatile UINT *ADDR_JOIN_READER_A_STREAM = (volatile UINT *)(JOIN_READER + 17);
volatile UINT *ADDR_JOIN_READER_B_STREAM = (volatile UINT *)(JOIN_READER + 25);

volatile uint8_t *FLAGS_JOIN = (uint8_t *)(JOIN);
volatile UINT *ADDR_JOIN_A_STREAM = (volatile UINT *)(JOIN + 1);
volatile UINT *ADDR_JOIN_B_STREAM = (volatile UINT *)(JOIN + 9);
volatile UINT *ADDR_JOIN_SS_REQ_STREAM = (volatile UINT *)(JOIN + 17);
volatile UINT *ADDR_JOIN_SS_RESP_STREAM = (volatile UINT *)(JOIN + 25);

volatile uint8_t *FLAGS_SS = (uint8_t *)(SS);

void top() {
  *FLAGS_SS = DEV_INIT;

  *ADDR_JOIN_READER_A = (ADDR)ADDR_A;
  *ADDR_JOIN_READER_B = (ADDR)ADDR_B;
  *ADDR_JOIN_READER_A_STREAM = (ADDR)stream_join_reader_a;
  *ADDR_JOIN_READER_B_STREAM = (ADDR)stream_join_reader_b;
  *FLAGS_JOIN_READER = DEV_INIT;

  *ADDR_JOIN_A_STREAM = (ADDR)stream_join_reader_a;
  *ADDR_JOIN_B_STREAM = (ADDR)stream_join_reader_b;
  *ADDR_JOIN_SS_REQ_STREAM = (ADDR)stream_join_ss;
  *ADDR_JOIN_SS_RESP_STREAM = (ADDR)stream_ss_join;
  *FLAGS_JOIN = DEV_INIT;

  while ((*FLAGS_SS & DEV_INTR) != DEV_INTR)
    ;

  return;
}
