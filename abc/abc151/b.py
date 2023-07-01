# https://atcoder.jp/contests/abc151/submissions/37706204

n, k, m = map(int, input().split())
a = list(map(int, input().split()))
s = sum(a)
m *= n

if s + k < m:
  print(-1)
else:
  print(max(m - s, 0))
