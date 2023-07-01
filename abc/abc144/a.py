# https://atcoder.jp/contests/abc144/submissions/34713874

a, b = map(int, input().split())
print(-1 if a > 9 or b > 9 else a * b)
