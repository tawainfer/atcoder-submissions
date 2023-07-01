# https://atcoder.jp/contests/abc284/submissions/37951611

import math

t = int(input())

for _ in range(t):
  n = int(input())

  for i in range(2, math.ceil(n ** (1 / 3))):
    if n % i == 0:
      x = n // i

      if math.ceil(x ** 0.5) ** 2 == x:
        print(math.ceil(x ** 0.5), i)
      else:
        print(i, x // i)

      break
