# https://atcoder.jp/contests/abc187/submissions/34700076

a, b = map(int, input().split())
print(max(a // 100 + a // 10 % 10 + a % 100 % 10, b // 100 + b // 10 % 10 + b % 100 % 10));
