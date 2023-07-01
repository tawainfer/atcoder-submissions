# https://atcoder.jp/contests/abc305/submissions/42209433

n = int(input())
print(n - n % 5 if n % 5 < 3 else n + (5 - n % 5))
