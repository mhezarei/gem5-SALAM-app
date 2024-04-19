import random
import math


random.seed(0)
NUM_VALUES = 512
VALUE_RANGE = (-1000, 1000)
B = 8
F = 4
NUM_LEVELS = int(math.log(NUM_VALUES / B, F))

CORES_BASE_ADDR = 0x80C00000
CORE_SIZE = (3 + F) * 8
NUM_CORES = sum([F**i for i in range(NUM_LEVELS)])

VALUES_BASE_ADDR = CORES_BASE_ADDR + NUM_CORES * CORE_SIZE
VALUE_SIZE = 2 * 8


values = []
for i in range(NUM_VALUES):
    ts = float(i)
    v = random.uniform(*VALUE_RANGE)
    values.append((ts, v))

cores = []
cum_num_cores = 0
for i in range(NUM_LEVELS):
    num_cores = F**i
    cum_num_cores += num_cores
    next_level_base_addr = CORES_BASE_ADDR + cum_num_cores * CORE_SIZE
    for j in range(num_cores):
        per_node_range = NUM_VALUES / num_cores
        range_start, range_end = j * per_node_range, (j + 1) * per_node_range - 1
        stat = 0
        if i == NUM_LEVELS - 1:  # last level cores which point to values
            curr_base_addr = VALUES_BASE_ADDR + j * F * B * VALUE_SIZE
            pointers = [hex(curr_base_addr + x * B * VALUE_SIZE) for x in range(F)]
        else:
            pointers = [
                hex(next_level_base_addr + x * CORE_SIZE)
                for x in [j * F + y for y in range(F)]
            ]
        cores.append((range_start, range_end, stat, *pointers))


s = f"""#include "data.h"

"""
print(s, flush=True)

s = f"""const Core CORES[NUM_CORES] =

"""
print(s, flush=True)
s = (
    str(cores)
    .replace("(", "{")
    .replace(")", "}")
    .replace("[", "{")
    .replace("]", "};")
    .replace("'", "")
)
print(s, flush=True)
print("", flush=True)

s = f"""const Point VALUES[NUM_VALUES] =

"""
print(s, flush=True)
s = str(values).replace("(", "{").replace(")", "}").replace("[", "{").replace("]", "};")
print(s, flush=True)
