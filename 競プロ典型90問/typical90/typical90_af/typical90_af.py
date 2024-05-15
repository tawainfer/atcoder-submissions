n = int(input())
a = [list(map(int, input().split())) for i in range(n)]
m = int(input())
friend = set()
for i in range(m):
  x, y = map(int, input().split())
  x, y = x - 1, y - 1
  friend.add((x, y))
  friend.add((y, x))

inf = 10 ** 18
dp = [[inf] * n for i in range(1 << n)]

for i in range(n):
  dp[1 << i][i] = min(dp[1 << i][i], a[i][0])

for s in range(1, (1 << n) - 1):
  t = format(s, 'b')
  j = t.count('1')

  for v in range(n):
    if not (s >> v) & 1:
      continue
    for u in range(n):
      if (s >> u) & 1:
        continue
      if (v, u) not in friend:
        ns = s | (1 << u)
        dp[ns][u] = min(dp[s][v] + a[u][j], dp[ns][u])

ans = min(dp[-1])
print(-1 if ans >= inf else ans)