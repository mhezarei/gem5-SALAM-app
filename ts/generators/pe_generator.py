import random


random.seed(0)

START, END = 0, 4194304  # ENDs = 4194304 (64MB), 67108864 (1GB)
NUM_QUERIES = 1000
FULL = False

s = f"""#include "../defines.h"

void top(ADDR addr_wm_req_stream, ADDR addr_wm_resp_stream, ADDR bs) {{
  {'//' if not FULL else ''} for (int i = 0; i < 30; i++)
  {'//' if not FULL else ''}   *((uint64_t *)addr_wm_req_stream) = {START};
  {'//' if not FULL else ''} for (int i = 0; i < 30; i++)
  {'//' if not FULL else ''}   *((uint64_t *)addr_wm_req_stream) = {END - 1};
  {'//' if not FULL else ''} *((uint64_t *)bs) = 215182;
"""
print(s, flush=True)


for _ in range(NUM_QUERIES):
    beg, end = sorted(random.sample(range(START, END), 2))
    s = f"""  for (int i = 0; i < 30; i++)
    *((uint64_t *)addr_wm_req_stream) = {beg};
  for (int i = 0; i < 30; i++)
    *((uint64_t *)addr_wm_req_stream) = {end};
  *((uint64_t *)bs) = 215182;
"""
    print(s, flush=True)

s = """}"""
print(s, flush=True)
