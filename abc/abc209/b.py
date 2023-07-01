# https://atcoder.jp/contests/abc209/submissions/37372030

n, x = map(int, input().split())
a = list(map(int, input().split()))

s = 0
for i in range(n):
  if i % 2:
    a[i] -= 1
  s += a[i]

print("No" if s > x else "Yes")
