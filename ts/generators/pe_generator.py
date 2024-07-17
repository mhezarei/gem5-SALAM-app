import random
import numpy as np


START, END = (0, 67108864)
NUM_QUERIES_PER_PE = 1024
FULL = False
NUM_PE_UNITS = 16
NUM_QUERIES = NUM_QUERIES_PER_PE * NUM_PE_UNITS

ALGO = "fine_coarse_random_aligned"
random.seed(0)
np.random.seed(0)


def make_queries():
    alignments = [4**x for x in range(2, 12)]
    # last 4 levels
    diffs = [4**x for x in range(2, 7)]
    if ALGO == "random":
        first_integers = np.random.randint(START, END, size=NUM_QUERIES)
        second_integers = np.array(
            [np.random.randint(x + 1, END) for x in first_integers]
        )
        vals = np.vstack((first_integers, second_integers)).T.flatten()
    elif ALGO == "aligned_fixed_depth":
        alignment = 16
        first_integers = np.random.randint(START, END, size=NUM_QUERIES)
        first_integers = alignment * (first_integers // alignment)
        second_integers = np.array(
            [np.random.randint(x + 1, END) for x in first_integers]
        )
        second_integers = alignment * ((second_integers // alignment) + 1) - 1
        vals = np.vstack((first_integers, second_integers)).T.flatten()
    elif ALGO == "aligned_random_depth":
        random_alignments = [random.choice(alignments) for _ in range(NUM_QUERIES)]
        first_integers = np.random.randint(START, END, size=NUM_QUERIES)
        first_integers = random_alignments * (first_integers // random_alignments)
        second_integers = np.array(
            [np.random.randint(x + 1, END) for x in first_integers]
        )
        second_integers = (
            random_alignments * ((second_integers // random_alignments) + 1) - 1
        )
        vals = np.vstack((first_integers, second_integers)).T.flatten()
    elif ALGO == "nested":
        vals = []
        while len(vals) < 2 * NUM_QUERIES:
            print("starting over", len(vals))
            beg = START
            end = END
            step = 5
            thresh = 1024
            while True:
                beg = np.random.randint(beg, beg + (end - beg) // step, size=1)[0]
                if abs(end - beg) < thresh:
                    break
                end = np.random.randint(end - (end - beg) // step, end, size=1)[0]
                if abs(end - beg) < thresh:
                    break
                print("nice", beg, end)
                vals.append(beg)
                vals.append(end)

                if len(vals) == 2 * NUM_QUERIES:
                    break
    elif ALGO == "nested_aligned_fixed_depth":
        vals = []
        while len(vals) < 2 * NUM_QUERIES:
            print("starting over", len(vals))
            beg = START
            end = END
            step = 5
            thresh = 1024
            alignment = 16
            while True:
                beg = np.random.randint(beg, beg + (end - beg) // step, size=1)[0]
                if abs(end - beg) < thresh:
                    break
                end = np.random.randint(end - (end - beg) // step, end, size=1)[0]
                if abs(end - beg) < thresh:
                    break
                beg = alignment * (beg // alignment)
                end = alignment * ((end // alignment) + 1) - 1
                print("nice", beg, end)
                vals.append(beg)
                vals.append(end)

                if len(vals) == 2 * NUM_QUERIES:
                    break
    elif ALGO == "nested_aligned_random_depth":
        vals = []
        while len(vals) < 2 * NUM_QUERIES:
            beg = START
            end = END
            step = 5
            alignment = random.choice(alignments)
            thresh = min(1024, alignment)
            print("starting over", len(vals), alignment)
            while True:
                beg = np.random.randint(beg, beg + (end - beg) // step, size=1)[0]
                if abs(end - beg) < thresh:
                    break
                end = np.random.randint(end - (end - beg) // step, end, size=1)[0]
                if abs(end - beg) < thresh:
                    break
                beg = alignment * (beg // alignment)
                end = alignment * ((end // alignment) + 1) - 1
                print("nice", beg, end)
                if len(vals) > 2 and beg == vals[-2] and end == vals[-1]:
                    break
                vals.append(beg)
                vals.append(end)

                if len(vals) == 2 * NUM_QUERIES:
                    break
    elif ALGO == "cluster":
        vals = []
        while len(vals) < 2 * NUM_QUERIES:
            rand_center = random.randint(START, END - 1)
            max_dist = min(rand_center - START, END - rand_center)
            fixed_dist = max_dist // random.randint(1, 10)
            print("center", rand_center, "fixed dist", fixed_dist)
            for _ in range(256):
                beg = random.randint(rand_center - fixed_dist, rand_center)
                end = random.randint(rand_center, rand_center + fixed_dist - 1)
                print("nice", beg, end)
                vals.append(beg)
                vals.append(end)
    elif ALGO == "cluster_aligned":
        alignment = 16
        vals = []
        while len(vals) < 2 * NUM_QUERIES:
            rand_center = random.randint(START, END - 1)
            max_dist = min(rand_center - START, END - rand_center)
            fixed_dist = max_dist // random.randint(1, 10)
            print("center", rand_center, "fixed dist", fixed_dist)
            for _ in range(256):
                beg = random.randint(rand_center - fixed_dist, rand_center)
                end = random.randint(rand_center, rand_center + fixed_dist - 1)
                beg = alignment * (beg // alignment)
                end = alignment * ((end // alignment) + 1) - 1
                print("nice", beg, end)
                vals.append(beg)
                vals.append(end)
    elif ALGO == "sequential_aligned":
        vals = []
        step = 4096
        beg = 0
        end = -1
        while len(vals) < 2 * NUM_QUERIES:
            beg = end + 1
            end = min(END - 1, beg + step - 1)
            vals.append(beg)
            vals.append(end)
    elif ALGO == "sequential":
        vals = []
        step = 4194
        beg = 0
        end = -1
        while len(vals) < 2 * NUM_QUERIES:
            beg = end + 1
            end = min(END - 1, beg + step - 1)
            vals.append(beg)
            vals.append(end)
    elif ALGO == "zipf":
        skew = 1.2
        values = np.arange(START, END - 1)
        zipfian_values = np.random.zipf(a=skew, size=NUM_QUERIES)
        zipfian_values = np.clip(zipfian_values, START, END - END // 100)
        zipfian_values -= 1
        queries = []
        for i in range(NUM_QUERIES):
            start = zipfian_values[i]
            end = np.random.choice(values[start:])
            queries.append((start, end))
        vals = np.array(queries).flatten()
    elif ALGO == "zipf_aligned":
        alignment = 16
        skew = 1.2
        values = np.arange(START, END)
        zipfian_values = np.random.zipf(a=skew, size=NUM_QUERIES)
        zipfian_values = np.clip(zipfian_values, START, END - END // 100)
        zipfian_values -= 1
        queries = []
        for i in range(NUM_QUERIES):
            start = zipfian_values[i]
            end = np.random.choice(values[start:])
            start = alignment * (start // alignment)
            end = alignment * ((end // alignment) + 1) - 1
            queries.append((start, end))
        vals = np.array(queries).flatten()
    elif ALGO == "full_fine_grain":
        first_integers = np.random.randint(START, END, size=NUM_QUERIES)
        second_integers = np.array(
            [
                np.random.randint(x + 1, x + random.choice(diffs) + 1)
                for x in first_integers
            ]
        )
        vals = np.vstack((first_integers, second_integers)).T.flatten()
    elif ALGO == "full_fine_grain_aligned":
        alignment = 16
        first_integers = np.random.randint(START, END, size=NUM_QUERIES)
        first_integers = alignment * (first_integers // alignment)
        second_integers = np.array(
            [
                np.random.randint(x + 1, x + random.choice(diffs) + 1)
                for x in first_integers
            ]
        )
        second_integers = alignment * ((second_integers // alignment) + 1) - 1
        vals = np.vstack((first_integers, second_integers)).T.flatten()
    elif ALGO == "fine_50_coarse_50_aligned":
        alignment = 16
        first_integers = np.random.randint(START, END, size=NUM_QUERIES // 2)
        first_integers = alignment * (first_integers // alignment)
        second_integers = np.array(
            [
                np.random.randint(x + 1, x + random.choice(diffs) + 1)
                for x in first_integers
            ]
        )
        second_integers = alignment * ((second_integers // alignment) + 1) - 1
        vals1 = np.vstack((first_integers, second_integers)).T.flatten()

        alignment = 16
        first_integers = np.random.randint(START, END, size=NUM_QUERIES // 2)
        first_integers = alignment * (first_integers // alignment)
        second_integers = np.array(
            [np.random.randint(x + 1, END) for x in first_integers]
        )
        second_integers = alignment * ((second_integers // alignment) + 1) - 1
        vals2 = np.vstack((first_integers, second_integers)).T.flatten()

        vals = vals1.tolist() + vals2.tolist()
    elif ALGO == "fine_75_coarse_25_aligned":
        alignment = 16
        first_integers = np.random.randint(START, END, size=(NUM_QUERIES * 3) // 4)
        first_integers = alignment * (first_integers // alignment)
        second_integers = np.array(
            [
                np.random.randint(x + 1, x + random.choice(diffs) + 1)
                for x in first_integers
            ]
        )
        second_integers = alignment * ((second_integers // alignment) + 1) - 1
        vals1 = np.vstack((first_integers, second_integers)).T.flatten()

        alignment = 16
        first_integers = np.random.randint(START, END, size=NUM_QUERIES // 4)
        first_integers = alignment * (first_integers // alignment)
        second_integers = np.array(
            [np.random.randint(x + 1, END) for x in first_integers]
        )
        second_integers = alignment * ((second_integers // alignment) + 1) - 1
        vals2 = np.vstack((first_integers, second_integers)).T.flatten()

        vals = vals1.tolist() + vals2.tolist()
    elif ALGO == "fine_25_coarse_75_aligned":
        alignment = 16
        first_integers = np.random.randint(START, END, size=NUM_QUERIES // 4)
        first_integers = alignment * (first_integers // alignment)
        second_integers = np.array(
            [
                np.random.randint(x + 1, x + random.choice(diffs) + 1)
                for x in first_integers
            ]
        )
        second_integers = alignment * ((second_integers // alignment) + 1) - 1
        vals1 = np.vstack((first_integers, second_integers)).T.flatten()

        alignment = 16
        first_integers = np.random.randint(START, END, size=(NUM_QUERIES * 3) // 4)
        first_integers = alignment * (first_integers // alignment)
        second_integers = np.array(
            [np.random.randint(x + 1, END) for x in first_integers]
        )
        second_integers = alignment * ((second_integers // alignment) + 1) - 1
        vals2 = np.vstack((first_integers, second_integers)).T.flatten()

        vals = vals1.tolist() + vals2.tolist()
    elif ALGO == "fine_coarse_random_aligned":
        vals = []

        alignment = 16
        first_integers = np.random.randint(START, END, size=NUM_QUERIES)
        first_integers = alignment * (first_integers // alignment)
        second_integers = np.array(
            [
                np.random.randint(x + 1, x + random.choice(diffs) + 1)
                for x in first_integers
            ]
        )
        second_integers = alignment * ((second_integers // alignment) + 1) - 1
        vals1 = np.vstack((first_integers, second_integers)).T.flatten()

        first_integers = np.random.randint(START, END, size=NUM_QUERIES)
        first_integers = alignment * (first_integers // alignment)
        second_integers = np.array(
            [np.random.randint(x + 1, END) for x in first_integers]
        )
        second_integers = alignment * ((second_integers // alignment) + 1) - 1
        vals2 = np.vstack((first_integers, second_integers)).T.flatten()

        while len(vals) < NUM_QUERIES * 2:
            x = random.randint(1, 10)
            if x % 2 == 0:
                vals.append(vals1[0])
                vals.append(vals1[1])
                vals1 = vals1[2:]
            else:
                vals.append(vals2[0])
                vals.append(vals2[1])
                vals2 = vals2[2:]

    return vals


random_vals = make_queries()[: 2 * NUM_QUERIES]
req_file = f"req_{ALGO}.txt"
open(req_file, "w").close()

for i in range(0, len(random_vals), 2):
    beg, end = random_vals[i], random_vals[i + 1]
    with open(req_file, "a") as f:
        f.write(f"{beg} {end}\n")


for i in range(1, NUM_PE_UNITS + 1):
    fpath = f"hw/pe{i}.c"
    open(fpath, "w").close()

    s = f"""#include "../defines.h"

  void top(ADDR addr_wm_req_stream, ADDR addr_wm_resp_stream, ADDR bs) {{
    {'//' if not FULL else ''} for (int i = 0; i < 30; i++)
    {'//' if not FULL else ''}   *((uint64_t *)addr_wm_req_stream) = {START};
    {'//' if not FULL else ''} for (int i = 0; i < 30; i++)
    {'//' if not FULL else ''}   *((uint64_t *)addr_wm_req_stream) = {END - 1};
    {'//' if not FULL else ''} *((uint64_t *)bs) = 215182;
  """
    with open(fpath, "a") as f:
        f.write(s)

    for _ in range(NUM_QUERIES_PER_PE):
        #       s = f"""  for (int i = 0; i < 30; i++)
        #     *((uint64_t *)addr_wm_req_stream) = {beg};
        #   for (int i = 0; i < 30; i++)
        #     *((uint64_t *)addr_wm_req_stream) = {end};
        #   *((uint64_t *)bs) = 215182;
        # """
        # with open(fpath, "a") as f:
        #     f.write(s)

        # beg, end = sorted(random.sample(range(START, END), 2))
        # with open(req_file, "a") as f:
        #     f.write(f"{beg} {end}\n")
        pass

    s = """}"""
    with open(fpath, "a") as f:
        f.write(s)
