# https://atcoder.jp/contests/abc340/submissions/50216179

q = int(input())
a = list()

for _ in range(q):
  t, x = map(int, input().split())
  if t == 1:
    a.append(x)
  elif t == 2:
    print(a[-x])
