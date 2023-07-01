# https://atcoder.jp/contests/abc206/submissions/37372147

import time
time.sleep(1.9)

n = int(input())
s = 0
for i in range(1, 1000000):
  s += i
  if s >= n:
    print(i)
    break
