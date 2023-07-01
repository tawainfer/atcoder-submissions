# https://atcoder.jp/contests/abc118/submissions/34714249

a, b = map(int, input().split())
print(a + b if not(b % a) else b - a)
