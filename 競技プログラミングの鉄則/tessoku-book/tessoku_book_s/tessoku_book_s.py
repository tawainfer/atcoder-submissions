n, W = map(int, input().split())
w = [0]
v = [0]
for _ in range(n):
  x, y = map(int, input().split())
  w.append(x)
  v.append(y)

INF = 2e18
dp = [[-INF] * (2 * W + 1) for _ in range(n + 1)]
dp[0][0] = 0

for i in range(n):
  for j in range(W + 1):
    if dp[i][j] != -INF:
      dp[i + 1][j + w[i + 1]] = max(dp[i + 1][j + w[i + 1]], dp[i][j] + v[i + 1])
      dp[i + 1][j] = max(dp[i + 1][j], dp[i][j])

ans = -INF
for i in range(W + 1):
  ans = max(ans, dp[n][i])

print(ans)