# https://atcoder.jp/contests/abc332/submissions/48444025

k, g, m = map(int, input().split())

cg = 0
cm = 0
for _ in range(k):
  if cg == g:
    cg = 0
  elif cm == 0:
    cm = m
  elif cg + cm > g:
    cm -= g - cg
    cg = g
  else:
    cg += cm
    cm = 0

print(cg, cm)
