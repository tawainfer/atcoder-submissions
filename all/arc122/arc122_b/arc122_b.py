import numpy as np
from numba import njit

@njit
def cost(a, x):
  res = 0
  for i in range(len(a)):
    res += x + a[i] - min(a[i], 2 * x)
  
  res /= len(a)
  return res

n = int(input())
a = np.array(list(map(int, input().split())))

l = 0
r = 1e18

while r - l > 0.0000001:
  c1 = l + (r - l) / 3
  c2 = r - (r - l) / 3
  if cost(a, c1) > cost(a, c2):
    l = c1
  else:
    r = c2

print(cost(a, l))
