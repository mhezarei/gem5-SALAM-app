import random
import math
import struct
import numpy as np


random.seed(0)

NUM_STREAM_A_RECORDS = 100
NUM_STREAM_B_RECORDS = 10

NUM_A_RECORD_FIELDS = 3
NUM_B_RECORD_FIELDS = 2

NUM_UNIQUE_LOCATIONS = 3
NUM_UNIQUE_SENSORS = 5


def to_bin(arr, fn: str):
    packing_str = "QQd" * (len(arr) // 3) if fn == "b.bin" else "Q" * len(arr)
    s = struct.pack(packing_str, *arr)

    f = open("data/" + fn, "wb")
    f.write(s)
    f.close()


def gen_stream_a():
    a = []
    # case 1: vehicle sensor: [location ID, sensor ID, vehicle count]
    for i in range(NUM_STREAM_A_RECORDS):
        a.append(i + 1)
        a.append(random.randint(1, NUM_UNIQUE_LOCATIONS))
        a.append(random.randint(1, NUM_UNIQUE_SENSORS))
        a.append(random.randint(1, 1000))

    return a


def gen_stream_b():
    b = []
    # case 1: temperature sensor: [location ID, temperature]
    for i in range(NUM_STREAM_B_RECORDS):
        b.append(i + 1)
        b.append(random.randint(1, NUM_UNIQUE_LOCATIONS))
        b.append(float(random.randint(1, 1000)))

    return b


def main():
    a = gen_stream_a()
    b = gen_stream_b()
    print(a)
    print(b)
    to_bin(a, "a.bin")
    to_bin(b, "b.bin")


if __name__ == "__main__":
    main()
