# https://atcoder.jp/contests/abc275/submissions/37055368

a, b, c, d, e, f = map(int, input().split())
print(((a * b * c) - (d * e * f)) % 998244353)
