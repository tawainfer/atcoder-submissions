# https://atcoder.jp/contests/abc108/submissions/34829137

k = int(input())
if k % 2: print(k // 2 * (k // 2 + 1))
else: print((k // 2) * (k // 2))
