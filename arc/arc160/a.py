# https://atcoder.jp/contests/arc160/submissions/41636977

import numpy as np
from numba import njit

@njit
def solve(n, k, a):
  cnt = 0

  if n == 1:
    print(a)
    return

  pos = np.zeros(n + 1, dtype = np.int64)
  for i in range(n):
    pos[a[i]] = i

  stack = [(0, 0)]

  while stack:
    p, i = stack.pop()

    if p == n:
      cnt += n
      if cnt >= k:
        return a
      continue

    while i < n:
      i += 1
      if pos[i] < p:
        continue

      if a[p] == i:
        stack.append((p, i))
        stack.append((p + 1, 0))
        break

      else:
        cnt += 1
        if cnt == k:
          t = np.concatenate((a[:p], a[p:pos[i] + 1][::-1], a[pos[i] + 1:]))
          return t

n, k = map(int, input().split())
a = np.array(list(map(int, input().split())), dtype = np.int64)
result = solve(n, k, a)

for x in result:
  print(x, end = ' ')

