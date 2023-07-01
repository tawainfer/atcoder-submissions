# https://atcoder.jp/contests/abc217/submissions/38090900

n = int(input())
p = list(map(int, input().split()))
q = [0] * n

for i in range(n):
  q[p[i] - 1] = i + 1

for x in q:
  print(x, end = " ")
