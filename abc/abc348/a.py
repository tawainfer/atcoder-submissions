# https://atcoder.jp/contests/abc348/submissions/52059050

n = int(input())
for i in range(n):
  if i % 3 == 2:
    print('x', end = '')
  else:
    print('o', end = '')
