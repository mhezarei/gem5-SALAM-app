#ifndef __DEFINES_H__
#define __DEFINES_H__

#include "signal_stream_clstr_hw_defines.h"
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

typedef float FLOAT;
typedef double DOUBLE;
typedef uint32_t UINT;
typedef int32_t INT;
typedef uint64_t ADDR;

typedef struct Event {
  DOUBLE timestamp;
  DOUBLE value;
} Event;

#define NUM_POINTS 61051520

#define SIZE_II NUM_POINTS * sizeof(Event)
#define SIZE_ABP NUM_POINTS * sizeof(Event)
#define SIZE_RESULT NUM_POINTS * sizeof(Event)

#define WINDOW_SIZE 1000
#define MAX_WINDOW_SIZE NUM_POINTS

#define DEV_INIT 0x01
#define DEV_INTR 0x04

#define END_TOKEN 0xFFFFFFFF

#endif
