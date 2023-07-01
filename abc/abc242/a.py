# https://atcoder.jp/contests/abc242/submissions/35030230

a, b, c, x = map(int, input().split())
if x <= a: print(1)
elif x <= b: print(c / (b - a))
else: print(0)
