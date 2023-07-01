# https://atcoder.jp/contests/abc241/submissions/38034697

import sys

n, m = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

for x in b:
  if x in a:
    a.remove(x)
  else:
    print("No")
    sys.exit()

print("Yes")
