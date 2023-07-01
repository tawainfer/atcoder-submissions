# https://atcoder.jp/contests/abc237/submissions/34774085

n = int(input())
print("Yes" if -(2 ** 31) <= n < 2 ** 31 else "No")
