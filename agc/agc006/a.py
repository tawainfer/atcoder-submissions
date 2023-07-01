# https://atcoder.jp/contests/agc006/submissions/37469611

import re
import sys
import time
time.sleep(1.9)

n = int(input())
s = input()
t = input()

for i in range(n):
  if re.match(s[i:], t):
    print(2 * n - (n - i))
    sys.exit()

print(2 * n)
