# https://atcoder.jp/contests/abc142/submissions/37584984

n, k = map(int, input().split())
h = list(map(int, input().split()))

ans = 0
for x in h:
  if x >= k:
    ans += 1

print(ans)
