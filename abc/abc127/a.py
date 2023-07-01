# https://atcoder.jp/contests/abc127/submissions/34713931

a, b = map(int, input().split())
if a >= 13:
  print(b)
elif 6 <= a and a <= 12:
  print(b // 2)
else:
  print(0)
