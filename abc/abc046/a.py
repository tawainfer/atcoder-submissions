# https://atcoder.jp/contests/abc046/submissions/35805842

a, b, c = map(int, input().split())
a, b, c = sorted([a, b, c])
if a == b == c: print(1)
elif a == b or b == c: print(2)
else: print(3)
