# https://atcoder.jp/contests/arc105/submissions/37534646

import math
n = int(input())
a = list(map(int, input().split()))

while len(a) > 1:
  a[-2] = math.gcd(a[-2], a[-1])
  a.pop()

print(a[0])
