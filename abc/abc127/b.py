# https://atcoder.jp/contests/abc127/submissions/37555860

r, d, x = map(int, input().split())
for _ in range(10):
  x = r * x - d
  print(x)
