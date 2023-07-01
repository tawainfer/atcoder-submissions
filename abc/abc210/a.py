# https://atcoder.jp/contests/abc210/submissions/34772501

n, a, x, y = map(int, input().split())
if n > a: print(a * x + (n - a) * y)
else: print(n * x)
