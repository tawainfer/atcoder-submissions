# https://atcoder.jp/contests/abc121/submissions/34714389

h, w = map(int, input().split())
a, b = map(int, input().split())
print(h * w - ((a * w + h * b) - a * b))
