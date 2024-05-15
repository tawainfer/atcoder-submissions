from numba import njit

@njit
def solve():
  print("Yes" if 2.0 ** n > n ** 2.0 else "No")

n = int(input())
solve()