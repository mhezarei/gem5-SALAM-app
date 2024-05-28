import random
import math
import struct
import numpy as np


random.seed(0)

FIXED_CACHE_SIZE = 512 * 1024
CACHE_ENTRY_SIZE = 24

# Format: B, F, NUM_VALUES
configs = {
    "64": [64, 64, 2**18],
    "32": [32, 32, 2**20],
    "16": [16, 16, 2**20],
    "8": [8, 8, 2**21],
    "4": [4, 4, 2**22],
    "64_4": [64, 4, 2**18],
}
suffixes = {
    "64": "F64B64",
    "32": "F32B32",
    "16": "F16B16",
    "8": "F8B8",
    "4": "F4B4",
    "64_4": "F64B4",
}

conf = "64"
suffix = suffixes[conf]
F, B, temp = configs[conf]
NUM_VALUES = temp * B * F
print(F, B, NUM_VALUES)

VALUE_RANGE = (-1000, 1000)
NUM_LEVELS = int(math.log(NUM_VALUES / B, F))
print(NUM_VALUES, NUM_LEVELS)

CORES_BASE_ADDR = 0x80C00000
CORE_SIZE = (3 + F) * 8
NUM_CORES = sum([F**i for i in range(NUM_LEVELS)])
print(NUM_CORES)

VALUES_BASE_ADDR = CORES_BASE_ADDR + NUM_CORES * CORE_SIZE
VALUE_SIZE = 2 * 8


def to_bin(arr, fn: str):
    vals = np.array(arr).flatten().tolist()
    vals = [int(x, 16) if "0x" in str(x) else float(str(x)) for x in vals]

    packing_str = (
        f"3d{F}Q" * (len(vals) // (3 + F)) if "cores" in fn else "d" * len(vals)
    )
    s = struct.pack(packing_str, *vals)

    f = open("data/" + fn, "wb")
    f.write(s)
    f.close()


def gen_fixed_cache():
    num_cache_entries = FIXED_CACHE_SIZE // CACHE_ENTRY_SIZE - 1
    final = []
    cum_num_cores = 0
    num_rem_entries = num_cache_entries
    for i in range(NUM_LEVELS):
        print("num rem entries", num_rem_entries)
        num_cores = F**i
        curr_level_base_addr = CORES_BASE_ADDR + cum_num_cores * CORE_SIZE
        cum_num_cores += num_cores
        next_level_base_addr = CORES_BASE_ADDR + cum_num_cores * CORE_SIZE
        print(hex(curr_level_base_addr), hex(next_level_base_addr))

        l = [
            hex(x) for x in range(curr_level_base_addr, next_level_base_addr, CORE_SIZE)
        ]
        print(len(l))

        if num_cores <= num_rem_entries:
            final += l
            num_rem_entries -= num_cores
        else:
            middle_index = len(l) // 2
            start_index = max(0, middle_index - (num_rem_entries // 2))
            final += l[start_index : start_index + num_rem_entries]
            break

    print(len(final))
    # print(str(final).replace("[", "").replace("]", "").replace("'", ""))

    open("fixedcache.txt", "w").close()
    with open("fixedcache.txt", "w") as f:
        for entry in final:
            f.write(str(int(entry, 16)) + "\n")


# gen_fixed_cache()


def gen_values():
    values = []
    for i in range(NUM_VALUES):
        ts = float(i)
        v = random.uniform(*VALUE_RANGE)
        values.append((ts, v))
        if i % (2**20) == 0:
            print(i)
    to_bin(values, f"values_{suffix}.bin")


# gen_values()


def gen_cores():
    cores = []
    cum_num_cores = 0
    for i in range(NUM_LEVELS):
        num_cores = F**i
        cum_num_cores += num_cores
        next_level_base_addr = CORES_BASE_ADDR + cum_num_cores * CORE_SIZE
        print(hex(next_level_base_addr))
        for j in range(num_cores):
            per_node_range = NUM_VALUES // num_cores
            range_start, range_end = j * per_node_range, (j + 1) * per_node_range - 1
            # print(range_start, range_end)
            stat = random.uniform(*VALUE_RANGE)
            if i == NUM_LEVELS - 1:  # last level cores which point to values
                curr_base_addr = VALUES_BASE_ADDR + j * F * B * VALUE_SIZE
                # print(hex(curr_base_addr))
                pointers = [hex(curr_base_addr + x * B * VALUE_SIZE) for x in range(F)]
            else:
                pointers = [
                    hex(next_level_base_addr + x * CORE_SIZE)
                    for x in [j * F + y for y in range(F)]
                ]
            # print(pointers)
            cores.append((range_start, range_end, stat, *pointers))

    to_bin(cores, f"cores_full_{suffix}.bin")


gen_cores()
