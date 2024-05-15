s = input()
t = input()

dp = [[0] * 2023 for _ in range(2023)]
for i in range(1, len(s) + 1):
  for j in range(1, len(t) + 1):
    if s[i - 1] == t[j - 1]: dp[i][j] = max(max(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1] + 1)
    else: dp[i][j] = max(dp[i][j - 1], dp[i - 1][j])

print(dp[len(s)][len(t)])