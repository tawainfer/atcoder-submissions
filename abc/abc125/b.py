# https://atcoder.jp/contests/abc125/submissions/40378218

n = int(input())
v = list(map(int, input().split()))
c = list(map(int, input().split()))

ans = 0
for i in range(n):
  ans += max(0, v[i] - c[i])

print(ans)
