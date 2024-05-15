n = int(input())
a = [0] + list(map(int, input().split()))
mod = 1000000007

dp = [[0] * 2 for _ in range(n + 1)]
dp[1][0] = a[1]
cnt = [[0] * 2 for _ in range(n + 1)]
cnt[1][0] = 1

for i in range(2, n + 1):
    tmp_dp0 = dp[i - 1][0]
    tmp_dp1 = dp[i - 1][1]
    tmp_cnt0 = cnt[i - 1][0]
    tmp_cnt1 = cnt[i - 1][1]
    
    if i != 2:
        dp[i][0] = ((tmp_dp0 + a[i] * tmp_cnt0) + (tmp_dp1 + a[i] * tmp_cnt1)) % mod
    else:
        dp[i][0] = (tmp_dp0 + a[i] * tmp_cnt0) % mod
    
    dp[i][1] = (tmp_dp0 - a[i] * tmp_cnt0) % mod
    cnt[i][0] = (tmp_cnt0 + tmp_cnt1) % mod
    cnt[i][1] = tmp_cnt0

print((dp[n][0] + dp[n][1]) % mod)
