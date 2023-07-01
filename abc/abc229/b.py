# https://atcoder.jp/contests/abc229/submissions/38034901

import sys

a, b = map(int, input().split())
a, b = sorted([a, b])
s = str(a)
t = str(b)

for i in range(len(s)):
  x = int(s[-(i + 1)]) + int(t[-(i + 1)])
  if x > 9:
    print("Hard")
    sys.exit()

print("Easy")
