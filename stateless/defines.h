#ifndef __DEFINES_H__
#define __DEFINES_H__

#include "stateless_clstr_hw_defines.h"
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

typedef float FLOAT;
typedef double DOUBLE;
typedef uint32_t UINT;
typedef int32_t INT;
typedef uint64_t ADDR;

typedef struct Record {
  uint64_t timestamp;
  uint64_t uid;
  uint64_t age;
  uint64_t sid;
} Record;

#define NUM_CLICK_EVENTS 1000

#define SIZE_CLICKS NUM_CLICK_EVENTS * sizeof(Record)

#define DEV_INIT 0x01
#define DEV_INTR 0x04

#define END_TOKEN -202020303030
#define STOP_TOKEN -101010202020

#endif
