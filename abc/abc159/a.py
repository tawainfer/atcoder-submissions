# https://atcoder.jp/contests/abc159/submissions/34902856

n, m = map(int, input().split())
ans = 0
if n > 1: ans += n * (n - 1) // 2
if m > 1: ans += m * (m - 1) // 2
print(ans)
