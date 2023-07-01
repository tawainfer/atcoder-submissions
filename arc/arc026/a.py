# https://atcoder.jp/contests/arc026/submissions/38149445

n, a, b = map(int, input().split())
print(max(n - 5, 0) * a + min(n, 5) * b)
