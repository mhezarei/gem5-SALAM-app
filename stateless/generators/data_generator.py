import random
import numpy as np
import gc
import os, psutil
import struct


random.seed(0)
LENGTH = 1000
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
to_bin(values, "values_1000.bin")
