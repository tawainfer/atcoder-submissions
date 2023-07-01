# https://atcoder.jp/contests/abc022/submissions/38180835

n, s, t = map(int, input().split())
w = int(input())

ans = 0
if s <= w <= t:
  ans = 1

for _ in range(n - 1):
  a = int(input())
  w += a
  if s <= w <= t:
    ans += 1

print(ans)
