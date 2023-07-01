# https://atcoder.jp/contests/abc031/submissions/38180329

a, d = map(int, input().split())
print(max((a + 1) * d, (d + 1) * a))
