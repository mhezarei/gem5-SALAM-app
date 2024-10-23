import random
import numpy as np
import gc
import os, psutil
import struct
from pprint import pprint


random.seed(2)
LENGTH = 100
FIELDS = ["timestamp", "uid", "age", "sid"]
CURRENT_TIMESTAMP = 1729280602


def to_bin(tup_arr: list, fn: str):
    tup_arr = list(sum(tup_arr, ()))
    s = struct.pack(f"{len(tup_arr)}Q", *tup_arr)
    f = open(fn, "wb")
    f.write(s)
    f.close()


values = [
    (
        CURRENT_TIMESTAMP + i,
        random.randint(0, 10**6),
        random.randint(10, 50),
        random.randint(1, 10),
    )
    for i in range(LENGTH)
]
# pprint(values)
# to_bin(values, "data/values.bin")

f = [v for v in values if v[2] > 30]
print(f)
print(len([tup for tup in [(v[0], v[1], v[2] * 3, v[3]) for v in f] if 100 <= tup[2] < 120]))
