d, n = map(int, input().split())
max_hour = [24] * 366

for _ in range(n):
  l, r, h = map(int, input().split())

  for i in range(l, r + 1):
    max_hour[i] = min(max_hour[i], h)

ans = 0
for i in range(1, d + 1):
  ans += max_hour[i]

print(ans)