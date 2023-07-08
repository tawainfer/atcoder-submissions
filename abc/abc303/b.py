# https://atcoder.jp/contests/abc303/submissions/43322905

n, m = map(int, input().split())

check = [[False] * n for _ in range(n)]
for _ in range(m):
  a = list(map(int, input().split()))

  for i in range(n):
    if i - 1 >= 0:
      check[a[i - 1] - 1][a[i] - 1] = True
      check[a[i] - 1][a[i - 1] - 1] = True
    if i + 1 < n:
      check[a[i] - 1][a[i + 1] - 1] = True
      check[a[i + 1] - 1][a[i] - 1] = True

ans = 0
for i in range(n):
  for j in range(i + 1, n):
    if not check[i][j]:
      ans += 1

print(ans)
