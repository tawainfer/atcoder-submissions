n = int(input())
p = list(map(int, input().split()))

ans = 0
for i in range(1, n - 1):
  if min(p[i - 1], p[i], p[i + 1]) != p[i] and max(p[i - 1], p[i], p[i + 1]) != p[i]:
    ans += 1

print(ans)