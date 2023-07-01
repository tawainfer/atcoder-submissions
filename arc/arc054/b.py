# https://atcoder.jp/contests/arc054/submissions/41924141

p = float(input())

l = 0
r = 1e18

while r - l > 1e-8:
  c1 = l + (r - l) / 3
  c2 = r - (r - l) / 3
  t1 = c1 + pow(2, -(c1 / 1.5)) * p
  t2 = c2 + pow(2, -(c2 / 1.5)) * p
  
  if t1 < t2: r = c2
  else: l = c1

print(l + pow(2, -(l / 1.5)) * p)
