import math

n, d = map(int, input().split())
ans = 0

for _ in range(n):
  p, q = map(int, input().split())
  if math.sqrt(p * p + q * q) <= d:
    ans += 1

print(ans)