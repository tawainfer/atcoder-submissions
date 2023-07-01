# https://atcoder.jp/contests/abc299/submissions/41488257

n, t = map(int, input().split())
c = list(map(int, input().split()))
r = list(map(int, input().split()))

ans = 0
ma = 0
if c.count(t) > 0:
  for i in range(n):
    if c[i] == t and ma < r[i]:
      ans = i
      ma = r[i]
else:
  for i in range(n):
    if c[i] == c[0] and ma < r[i]:
      ans = i
      ma = r[i]

print(ans + 1)

