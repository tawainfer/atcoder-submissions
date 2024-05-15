n = int(input())
h = list(map(int, input().split()))

ma = h[0]
ans = 1

for i in range(1, n):
  if ma <= h[i]: ans += 1
  ma = max(ma, h[i])

print(ans)