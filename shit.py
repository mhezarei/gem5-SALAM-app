import random


random.seed(0)
MIN, MAX = 0, 4194304
lst = [
    (random.randint(MIN, MAX - 1), random.randint(MIN, MAX - 1)) for _ in range(10000)
]

inc_l1 = 262144
inc_l2 = 16384
inc_l3 = 1024
l0 = [(MIN, MAX - 1)]
l1 = [(a, a + inc_l1 - 1) for a in range(MIN, MAX, inc_l1)]
l2 = [(a, a + inc_l2 - 1) for a in range(MIN, MAX, inc_l2)]
l3 = [(a, a + inc_l3 - 1) for a in range(MIN, MAX, inc_l3)]
print(l0)
print(l1)
print(l2)
print(l3)

l0_diff = MAX - 1
l1_diff = inc_l1 - 1
l2_diff = inc_l2 - 1
l3_diff = inc_l3 - 1

num_l1_total = 0
num_l2_total = 0
num_l3_total = 0

d1 = {t: 0 for t in l1}
d2 = {t: 0 for t in l2}
d3 = {t: 0 for t in l3}

for rng in lst:
    diff = abs(rng[0] - rng[1])
    a, b = min(rng), max(rng)

    for t in l1:
        if a < t[0] and t[1] < b:
            d1[t] += 1
    for t in l2:
        if a < t[0] and t[1] < b:
            d2[t] += 1
    for t in l3:
        if a < t[0] and t[1] < b:
            d3[t] += 1

    num_l1 = sum([(a < t[0] and t[1] < b) for t in l1])
    num_l2 = sum([(a < t[0] and t[1] < b) for t in l2])
    num_l3 = sum([(a < t[0] and t[1] < b) for t in l3])
    num_l1_total += num_l1
    num_l2_total += num_l2
    num_l3_total += num_l3
    print(rng, diff, num_l1, num_l2 - 16 * num_l1, num_l3 - 16 * num_l2)
    print()

print(num_l1_total, num_l2_total, num_l3_total)
print(dict(sorted(d1.items(), key=lambda x: x[1], reverse=True)))
print(dict(sorted(d2.items(), key=lambda x: x[1], reverse=True)))
print(dict(sorted(d3.items(), key=lambda x: x[1], reverse=True)))
