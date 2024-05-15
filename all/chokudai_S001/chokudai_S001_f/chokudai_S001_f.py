n = int(input())
a = list(map(int, input().split()))

ans = 1
ma = a[0]
for i in range(1, n):
  if ma < a[i]: ans += 1
  ma = max(ma, a[i])

print(ans)