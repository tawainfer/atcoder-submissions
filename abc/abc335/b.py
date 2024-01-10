# https://atcoder.jp/contests/abc335/submissions/49174390

n = int(input())

ans = set()
for i in range(n + 1):
  for j in range(n + 1):
    for k in range(n + 1):
      if i + j + k <= n:
        print(i, j, k)
