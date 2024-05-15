n = int(input())
a = list(map(int, input().split()))

INF = 1e9
dp = [[0] * (i + 1) for i in range(n - 1)]
dp.append(a)

for i in range(n - 1, 0, -1):
  for j in range(i):
    if i % 2 == 0:
      dp[i - 1][j] = min(dp[i][j], dp[i][j + 1])
    else:
      dp[i - 1][j] = max(dp[i][j], dp[i][j + 1])

print(dp[0][0])