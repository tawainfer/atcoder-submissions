# https://atcoder.jp/contests/abc296/submissions/40279568

a = list(range(8, 0, -1))
b = [chr(i) for i in range(97, 105)]
c = [input() for _ in range(8)]

for y in range(8):
  for x in range(8):
    if c[y][x] == '*':
      print(b[x], a[y], sep = '')
