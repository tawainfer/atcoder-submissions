# https://atcoder.jp/contests/abc220/submissions/34713065

a, b, c = map(int, input().split())
print(b // c * c if b // c - (a - 1) // c > 0 else -1)
