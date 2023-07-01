# https://atcoder.jp/contests/abc277/submissions/37055049

n, x = map(int, input().split())
p = list(map(int, input().split()))

for i in range(n):
  if p[i] == x: print(i + 1)
