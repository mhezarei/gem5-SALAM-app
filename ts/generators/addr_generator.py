import re


with open("ts_clstr_hw_defines.h", "r") as f:
    print("calc addr")
    for line in f.readlines():
        matches = re.finditer(r"^.*stream_wm_calc\d+ .*$", line, re.MULTILINE)
        for i, m in enumerate(matches):
            l = m.group()
            print(l.split()[-1], end=", ")
    print()

with open("ts_clstr_hw_defines.h", "r") as f:
    print("pe addr")
    for line in f.readlines():
        matches = re.finditer(r"^.*stream_pe\d+_wm .*$", line, re.MULTILINE)
        for i, m in enumerate(matches):
            l = m.group()
            print(l.split()[-1], end=", ")
    print()
