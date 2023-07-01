# https://atcoder.jp/contests/abc153/submissions/37582252

h, n = map(int, input().split())
a = list(map(int, input().split()))

if h <= sum(a):
  print("Yes")
else:
  print("No")
