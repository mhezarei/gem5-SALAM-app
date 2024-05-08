#ifndef __DEFINES_H__
#define __DEFINES_H__

#include "ts_clstr_hw_defines.h"
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

typedef uint32_t UINT;
typedef int32_t INT;
typedef uint64_t ADDR;
typedef double DOUBLE;

typedef struct Point {
  DOUBLE ts;
  DOUBLE value;
} Point;

typedef struct Core {
  DOUBLE start;
  DOUBLE end;
  DOUBLE stat;
  // ADDR p0, p1, p2, p3; // for NUM_VALUES=512
  ADDR p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15;
} Core;

// #define NUM_VALUES 512
// #define NUM_CHILDREN 4
// #define NUM_CORES 21
#define NUM_VALUES 4194304
#define NUM_CHILDREN 16
#define NUM_CORES 4369
// #define NUM_VALUES 67108864
// #define NUM_CHILDREN 16
// #define NUM_CORES 1118481

#define CORES_SIZE NUM_CORES * sizeof(Core)
#define VALUES_SIZE NUM_VALUES * sizeof(Point)

#define END_TOKEN 0xFFFFFFFFFFFFFFFF

#define DEV_INIT 0x01
#define DEV_INTR 0x04

#endif
