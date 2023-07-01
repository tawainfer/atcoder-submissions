# https://atcoder.jp/contests/abc154/submissions/34713137

s, t = input().split()
a, b = map(int, input().split())
u = input()
if t == u: b -= 1
else: a -= 1
print(a, b)
