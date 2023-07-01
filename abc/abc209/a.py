# https://atcoder.jp/contests/abc209/submissions/34666374

a, b = map(int, input().split())
if a > b: print(0)
else: print(b - a + 1)
