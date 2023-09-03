# https://atcoder.jp/contests/abc318/submissions/45216213

n, m, p = map(int, input().split())

ans = 0
cd = m
while cd <= n:
  ans += 1
  cd += p

print(ans)
