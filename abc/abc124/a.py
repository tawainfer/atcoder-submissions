# https://atcoder.jp/contests/abc124/submissions/34707668

a, b = map(int, input().split())
if a == b: print(a * 2)
else: print(max(a, b) * 2 - 1)
