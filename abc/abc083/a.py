# https://atcoder.jp/contests/abc083/submissions/34712982

a, b, c, d = map(int, input().split())
if a + b > c + d: print("Left")
elif a + b < c + d: print("Right")
else: print("Balanced")
