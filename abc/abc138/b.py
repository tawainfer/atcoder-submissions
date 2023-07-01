# https://atcoder.jp/contests/abc138/submissions/40378019

import functools
import math

def my_lcm_base(x, y):
    return (x * y) // math.gcd(x, y)

def my_lcm(*integers):
  return functools.reduce(my_lcm_base, integers)

n = int(input())
a = list(map(int, input().split()))

d = 0
for x in a:
  d += my_lcm(*a) // x

print(my_lcm(*a) / d)
