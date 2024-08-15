import random
import numpy as np
import gc
import os, psutil
import struct


random.seed(0)
RANDOM_PORTION = 0.3
LOAD = "_full"
SUBLENGTH = 100000

def to_bin(tup_arr, fn: str):
    floats = list(sum(tup_arr, ()))
    s = struct.pack('d' * len(floats), *floats)
    f = open(fn, 'ab')
    f.write(s)
    f.close()


with open(f"../datasets/indices{LOAD}.txt", "r") as f:
    indices = f.readlines()[0]
    indices = [float(s) for s in indices.split(",") if s]

with open(f"../datasets/ii{LOAD}.txt", "r") as f:
    ii = f.readlines()[0]
    ii = [float(s) for s in ii.split(",") if s]
    random_indices = random.sample(range(len(ii)), int(len(ii) * RANDOM_PORTION))
    z = np.zeros(len(ii))
    z[random_indices] = 1
    ii = (ii * (1 - z)).tolist()

with open(f"../datasets/abp{LOAD}.txt", "r") as f:
    abp = f.readlines()[0]
    abp = [float(s) for s in abp.split(",") if s]
    random_indices = random.sample(range(len(abp)), int(len(abp) * RANDOM_PORTION))
    z = np.zeros(len(abp))
    z[random_indices] = 1
    abp = (abp * (1 - z)).tolist()

for i in range(0, len(indices), SUBLENGTH):
    end_idx = min(len(indices), i+SUBLENGTH)
    tup_arr = list(zip(indices[i:end_idx], ii[i:end_idx]))
    print(i, flush=True)
    to_bin(tup_arr, f"ii{LOAD}.bin")
    del tup_arr
    gc.collect()

del ii
gc.collect()

for i in range(0, len(indices), SUBLENGTH):
    end_idx = min(len(indices), i+SUBLENGTH)
    tup_arr = list(zip(indices[i:end_idx], abp[i:end_idx]))
    print(i, flush=True)
    to_bin(tup_arr, f"abp{LOAD}.bin")
    del tup_arr
    gc.collect()
