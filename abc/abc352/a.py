# https://atcoder.jp/contests/abc352/submissions/53080952

n, x, y, z = map(int, input().split())
if x > y:
  x, y = y, x

if x <= z <= y:
  print('Yes')
else:
  print('No')
