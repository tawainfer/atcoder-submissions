n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

l = -1e9
r = 1e9

for i in range(n):
  l = max(l, a[i])
  r = min(r, b[i])

ans = 0
for i in range(l, r + 1):
  ans += 1

print(ans)