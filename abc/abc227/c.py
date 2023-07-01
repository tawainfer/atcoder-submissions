# https://atcoder.jp/contests/abc227/submissions/38295004

from numba import njit

@njit
def solve():
  ans = 0
  for a in range(1, n + 1):
    if a * a * a > n:
      break

    for b in range(a, n + 1):
      if a * b * b > n:
        break

      ans += n // (a * b) - b + 1
      
  return ans

n = int(input())
print(solve())
