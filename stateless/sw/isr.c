#include <stdio.h>

extern volatile uint8_t *top;

void isr(void) {
  printf("Interrupt\n");
  *top = 0x00;
  printf("Interrupt finished\n");
}
