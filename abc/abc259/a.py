# https://atcoder.jp/contests/abc259/submissions/34903233

n, m, x, t, d = map(int, input().split())
print(t if m > x else (t - x * d) + d * m)
