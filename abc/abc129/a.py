# https://atcoder.jp/contests/abc129/submissions/34774014

a, b, c = map(int, input().split())
print(min(a + b, min(b + c, c + a)))
