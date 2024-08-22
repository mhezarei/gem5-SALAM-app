#ifndef __DEFINES_H__
#define __DEFINES_H__

#include "kafka_clstr_hw_defines.h"
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

typedef uint32_t UINT;
typedef int32_t INT;
typedef uint64_t ADDR;
typedef double DOUBLE;

#define DEV_INIT 0x01
#define DEV_INTR 0x04

#define END_TOKEN -202020303030 // 0xC24784AC985B0000
#define A_TOKEN 102030          // 0x40F8E8E000000000
#define B_TOKEN 405060          // 0x4118B91000000000

#define ADDR_A 0x80C00000
#define ADDR_B 0x80C00960 // 0x80C00000 + 2400
#define NUM_A_RECORDS 100
#define NUM_B_RECORDS 10

typedef struct ARecord {
  uint64_t timestamp;
  uint64_t locationID;
  uint64_t sensorID;
  uint64_t vehicleCount;
} ARecord;

typedef struct BRecord {
  uint64_t timestamp;
  uint64_t locationID;
  uint64_t temperature;
} BRecord;

#endif
