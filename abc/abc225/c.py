# https://atcoder.jp/contests/abc225/submissions/37535334

import sys

n, m = map(int, input().split())
b = []
for _ in range(n):
  b.append(list(map(int, input().split())))

for i in range(n):
  for j in range(m):
    if i == 0:
      if j == 0:
        if (b[i][j] % 7) < 0 or 7 <= (b[i][j] % 7):
          print("No")
          sys.exit()
      else:
        if not((b[i][j - 1] + 1 == b[i][j]) and (((b[i][j - 1] - 1) % 7) < (b[i][j] - 1) % 7)):
          print("No")
          sys.exit()
    else:
      if b[i - 1][j] + 7 != b[i][j]:
        print("No")
        sys.exit()

print("Yes")

