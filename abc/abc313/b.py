# https://atcoder.jp/contests/abc313/submissions/44337155

n, m = map(int, input().split())
deg = [0] * n

for _ in range(m):
  a, b = map(int, input().split())
  deg[b - 1] += 1

cnt = 0
ans = -1

for i in range(n):
  if deg[i] == 0:
    cnt += 1
    ans = i + 1

if cnt == 1:
  print(ans)
else:
  print(-1)
