# https://atcoder.jp/contests/abc278/submissions/37055227

n, k = map(int, input().split())
a = list(map(int, input().split()))

for i in range(k):
  a.pop(0)
  a.append(0)

for i in range(n):
  print(a[i], end = "")
  if i == n - 1: print("\n", end = "")
  else: print(" ", end = "")
