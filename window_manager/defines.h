#ifndef __DEFINES_H__
#define __DEFINES_H__

#include "window_manager_clstr_hw_defines.h"
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

typedef uint32_t UINT;
typedef int32_t INT;
typedef uint64_t ADDR;

#define NUM_POINTS 100

#define SIZE_II NUM_POINTS * sizeof(INT)
#define SIZE_ABP NUM_POINTS * sizeof(INT)
#define SIZE_RESULT NUM_POINTS * sizeof(INT)

#define WINDOW_SIZE 10
#define MAX_WINDOW_SIZE NUM_POINTS
#define END_TOKEN 0xFFFFFFFFFFFFFFFF

#define DEV_INIT 0x01
#define DEV_INTR 0x04

#endif
