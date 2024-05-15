n, a, b = map(int, input().split())
dp = [False] * 200009
dp[a] = 1
dp[b] = 1

for i in range(n + 1):
  if i >= a and not dp[i - a]: dp[i] = True
  elif i >= b and not dp[i - b]: dp[i] = True
  else: dp[i] = False

print('First' if dp[n] else 'Second')