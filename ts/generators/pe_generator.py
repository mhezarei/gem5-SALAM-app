import random


START, END = (
    0,
    1073741824,
)  # ENDs = 512 (8KB), 4194304 (64MB), 67108864 (1GB), 268435456 (4GB)
NUM_QUERIES = 1000
FULL = False
NUM_PE_UNITS = 16

req_file = "req.txt"
open(req_file, "w").close()

for i in range(1, NUM_PE_UNITS + 1):
    random.seed(i)

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

    for _ in range(NUM_QUERIES):
        beg, end = sorted(random.sample(range(START, END), 2))
        s = f"""  for (int i = 0; i < 30; i++)
      *((uint64_t *)addr_wm_req_stream) = {beg};
    for (int i = 0; i < 30; i++)
      *((uint64_t *)addr_wm_req_stream) = {end};
    *((uint64_t *)bs) = 215182;
  """
        # with open(fpath, "a") as f:
        #     f.write(s)

        with open(req_file, "a") as f:
            f.write(f"{beg} {end}\n")

    s = """}"""
    with open(fpath, "a") as f:
        f.write(s)
