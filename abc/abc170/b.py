# https://atcoder.jp/contests/abc170/submissions/38149369

import sys

x, y = map(int, input().split())
for i in range(x + 1):
  if 2 * i + 4 * (x - i) == y:
    print("Yes")
    sys.exit()

print("No")
