# https://atcoder.jp/contests/abc066/submissions/35614070

a, b, c = map(int, input().split())
print(min(min(a + b, b + c), c + a))
