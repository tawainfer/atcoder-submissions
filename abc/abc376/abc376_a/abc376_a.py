n, c = map(int, input().split())
t = list(map(int, input().split()))

ans = 1
l = t[0]
for i in range(1, n):
  if t[i] - l >= c:
    ans += 1
    l = t[i]
print(ans)