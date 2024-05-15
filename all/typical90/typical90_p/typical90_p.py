n = int(input())
a, b, c = map(int, input().split())
from numba import njit

@njit
def f(a, b, c, n):
  ans = 1000000
  for x in range(0, 10000):
    for y in range(0, 10000 - x):
      s = n - a * x - b * y
      if s < 0:
        continue

      if s % c == 0:
        ans = min(ans, x + y + s // c)

  print(ans)

f(a, b, c, n)