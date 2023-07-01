# https://atcoder.jp/contests/abc136/submissions/34714026

a, b, c = map(int, input().split())
print(max(c - (a - b), 0))
