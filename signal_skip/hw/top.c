#include "../defines.h"

volatile uint8_t *FLAGS_READER = (uint8_t *)(READER);
volatile UINT *ADDR_READER_IN_1 = (volatile UINT *)(READER + 1);
volatile UINT *ADDR_READER_IN_2 = (volatile UINT *)(READER + 9);
volatile UINT *ADDR_READER_STREAM_OUT_1 = (volatile UINT *)(READER + 17);
volatile UINT *ADDR_READER_STREAM_OUT_2 = (volatile UINT *)(READER + 25);

volatile uint8_t *FLAGS_IMPUTE_1 = (uint8_t *)(IMPUTE_1);
volatile UINT *ADDR_IMPUTE_1_STREAM_IN = (volatile UINT *)(IMPUTE_1 + 1);
volatile UINT *ADDR_IMPUTE_1_STREAM_OUT = (volatile UINT *)(IMPUTE_1 + 9);
volatile UINT *ADDR_SPM_IMPUTE_1 = (volatile UINT *)(IMPUTE_1 + 17);
volatile UINT *IMPUTE_1_WINDOW_SIZE = (volatile UINT *)(IMPUTE_1 + 25);

volatile uint8_t *FLAGS_IMPUTE_2 = (uint8_t *)(IMPUTE_2);
volatile UINT *ADDR_IMPUTE_2_STREAM_IN = (volatile UINT *)(IMPUTE_2 + 1);
volatile UINT *ADDR_IMPUTE_2_STREAM_OUT = (volatile UINT *)(IMPUTE_2 + 9);
volatile UINT *ADDR_SPM_IMPUTE_2 = (volatile UINT *)(IMPUTE_2 + 17);
volatile UINT *IMPUTE_2_WINDOW_SIZE = (volatile UINT *)(IMPUTE_2 + 25);

volatile uint8_t *FLAGS_UPSAMPLE = (uint8_t *)(UPSAMPLE);
volatile UINT *ADDR_UPSAMPLE_STREAM_IN = (volatile UINT *)(UPSAMPLE + 1);
volatile UINT *ADDR_UPSAMPLE_STREAM_OUT = (volatile UINT *)(UPSAMPLE + 9);
volatile UINT *UPSAMPLE_WINDOW_SIZE = (volatile UINT *)(UPSAMPLE + 17);

volatile uint8_t *FLAGS_NORMALIZE_1 = (uint8_t *)(NORMALIZE_1);
volatile UINT *ADDR_NORMALIZE_1_STREAM_IN = (volatile UINT *)(NORMALIZE_1 + 1);
volatile UINT *ADDR_NORMALIZE_1_STREAM_OUT = (volatile UINT *)(NORMALIZE_1 + 9);
volatile UINT *ADDR_SPM_NORMALIZE_1 = (volatile UINT *)(NORMALIZE_1 + 17);
volatile UINT *NORMALIZE_1_WINDOW_SIZE = (volatile UINT *)(NORMALIZE_1 + 25);

volatile uint8_t *FLAGS_NORMALIZE_2 = (uint8_t *)(NORMALIZE_2);
volatile UINT *ADDR_NORMALIZE_2_STREAM_IN = (volatile UINT *)(NORMALIZE_2 + 1);
volatile UINT *ADDR_NORMALIZE_2_STREAM_OUT = (volatile UINT *)(NORMALIZE_2 + 9);
volatile UINT *ADDR_SPM_NORMALIZE_2 = (volatile UINT *)(NORMALIZE_2 + 17);
volatile UINT *NORMALIZE_2_WINDOW_SIZE = (volatile UINT *)(NORMALIZE_2 + 25);

volatile uint8_t *FLAGS_JOIN = (uint8_t *)(JOIN);
volatile UINT *ADDR_JOIN_STREAM_IN_1 = (volatile UINT *)(JOIN + 1);
volatile UINT *ADDR_JOIN_STREAM_IN_2 = (volatile UINT *)(JOIN + 9);
volatile UINT *ADDR_JOIN_OUT = (volatile UINT *)(JOIN + 17);
volatile UINT *JOIN_WINDOW_SIZE = (volatile UINT *)(JOIN + 25);

volatile uint8_t *FLAGS_WM = (uint8_t *)(WM);

void top(ADDR addr_ii, ADDR addr_abp, ADDR addr_result, UINT window_size,
         UINT *bs, ADDR haha) {

  *ADDR_READER_IN_1 = addr_ii;
  *ADDR_READER_IN_2 = addr_abp;
  *ADDR_READER_STREAM_OUT_1 = STREAM_READER_WM_II;
  *ADDR_READER_STREAM_OUT_2 = STREAM_READER_WM_ABP;
  for (size_t i = 0; i < 3; i++) {
    *bs = *ADDR_IMPUTE_1_STREAM_IN;
  }

  *ADDR_IMPUTE_1_STREAM_IN = STREAM_WM_IMPUTE_1;
  *ADDR_IMPUTE_1_STREAM_OUT = STREAM_IMPUTE_NORMALIZE_1;
  *ADDR_SPM_IMPUTE_1 = SPM_IMPUTE_1;
  *IMPUTE_1_WINDOW_SIZE = window_size;
  for (size_t i = 0; i < 3; i++) {
    *bs = *ADDR_IMPUTE_1_STREAM_IN;
  }

  *ADDR_IMPUTE_2_STREAM_IN = STREAM_WM_IMPUTE_2;
  *ADDR_IMPUTE_2_STREAM_OUT = STREAM_IMPUTE_UPSAMPLE;
  *ADDR_SPM_IMPUTE_2 = SPM_IMPUTE_2;
  *IMPUTE_2_WINDOW_SIZE = window_size;
  for (size_t i = 0; i < 3; i++) {
    *bs = *ADDR_IMPUTE_2_STREAM_IN;
  }

  *ADDR_UPSAMPLE_STREAM_IN = STREAM_IMPUTE_UPSAMPLE;
  *ADDR_UPSAMPLE_STREAM_OUT = STREAM_UPSAMPLE_NORMALIZE;
  *UPSAMPLE_WINDOW_SIZE = window_size;
  for (size_t i = 0; i < 3; i++) {
    *bs = *ADDR_IMPUTE_1_STREAM_IN;
  }

  *ADDR_NORMALIZE_1_STREAM_IN = STREAM_IMPUTE_NORMALIZE_1;
  *ADDR_NORMALIZE_1_STREAM_OUT = STREAM_NORMALIZE_JOIN_1;
  *ADDR_SPM_NORMALIZE_1 = SPM_NORMALIZE_1;
  *NORMALIZE_1_WINDOW_SIZE = window_size;
  for (size_t i = 0; i < 3; i++) {
    *bs = *ADDR_IMPUTE_2_STREAM_IN;
  }

  *ADDR_NORMALIZE_2_STREAM_IN = STREAM_UPSAMPLE_NORMALIZE;
  *ADDR_NORMALIZE_2_STREAM_OUT = STREAM_NORMALIZE_JOIN_2;
  *ADDR_SPM_NORMALIZE_2 = SPM_NORMALIZE_2;
  *NORMALIZE_2_WINDOW_SIZE = window_size;
  for (size_t i = 0; i < 3; i++) {
    *bs = *ADDR_IMPUTE_1_STREAM_IN;
  }

  *ADDR_JOIN_OUT = addr_result;
  *ADDR_JOIN_STREAM_IN_1 = STREAM_NORMALIZE_JOIN_1;
  *ADDR_JOIN_STREAM_IN_2 = STREAM_NORMALIZE_JOIN_2;
  *JOIN_WINDOW_SIZE = window_size;
  for (size_t i = 0; i < 3; i++) {
    *bs = *ADDR_IMPUTE_2_STREAM_IN;
  }

  *FLAGS_WM = DEV_INIT;
  *FLAGS_READER = DEV_INIT;
  *FLAGS_IMPUTE_1 = DEV_INIT;
  *FLAGS_IMPUTE_2 = DEV_INIT;
  *FLAGS_UPSAMPLE = DEV_INIT;
  *FLAGS_NORMALIZE_1 = DEV_INIT;
  *FLAGS_NORMALIZE_2 = DEV_INIT;
  *FLAGS_JOIN = DEV_INIT;

  while ((*FLAGS_IMPUTE_1 & DEV_INTR) != DEV_INTR)
    ;
  while ((*FLAGS_IMPUTE_2 & DEV_INTR) != DEV_INTR)
    ;
  while ((*FLAGS_UPSAMPLE & DEV_INTR) != DEV_INTR)
    ;
  while ((*FLAGS_NORMALIZE_1 & DEV_INTR) != DEV_INTR)
    ;
  while ((*FLAGS_NORMALIZE_2 & DEV_INTR) != DEV_INTR)
    ;
  while ((*FLAGS_JOIN & DEV_INTR) != DEV_INTR)
    ;

  return;
}
