# https://atcoder.jp/contests/abc237/submissions/38090856

h, w = map(int, input().split())
a = [list(map(int, input().split())) for _ in range(h)]

for j in range(w):
  for i in range(h):
    print(a[i][j], end = "")
    if i != h - 1:
      print(end = " ")
  print()

