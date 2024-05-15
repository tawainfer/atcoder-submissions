n, m, p = map(int, input().split())

ans = 0
cd = m
while cd <= n:
  ans += 1
  cd += p

print(ans)