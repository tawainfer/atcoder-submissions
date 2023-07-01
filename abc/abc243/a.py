# https://atcoder.jp/contests/abc243/submissions/34714317

v, a, b, c = map(int, input().split())
v %= (a + b + c)
if a > v: print("F")
elif (a + b) > v: print("M")
else: print("T")
