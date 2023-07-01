# https://atcoder.jp/contests/abc075/submissions/35078703

a, b, c = map(int, input().split())
a, b, c = sorted([a, b, c])
if a == b: print(c)
else: print(a)
