# https://atcoder.jp/contests/abc265/submissions/34665013

x, y, n = map(int, input().split())
x3 = x * 3;
print(n // 3 * min(x3, y) + n % 3 * x)
