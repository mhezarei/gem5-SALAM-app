#ifndef __HOST_DEFINES_H__
#define __HOST_DEFINES_H__

#include "../defines.h"
#include "data.h"

#define BASE 0x80c00000

#define II_OFFSET 0
#define ABP_OFFSET II_OFFSET + SIZE_II
#define RESULT_II_OFFSET ABP_OFFSET + SIZE_RESULT
#define RESULT_ABP_OFFSET RESULT_II_OFFSET + SIZE_RESULT

#endif