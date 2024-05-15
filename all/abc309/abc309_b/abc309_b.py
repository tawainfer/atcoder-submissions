n = int(input())
a = [list(input()) for _ in range(n)]

b = [[None] * n for _ in range(n)]
for i in range(n):
  for j in range(n):
    if not(i == 0 or j == 0 or i == n - 1 or j == n - 1):
      b[i][j] = a[i][j]

for i in range(n - 2, -1, -1):
  b[0][i + 1] = a[0][i]
for i in range(n - 2, -1, -1):
  b[i + 1][n - 1] = a[i][n - 1]
for i in range(1, n):
  b[n - 1][i - 1] = a[n - 1][i]
for i in range(1, n):
  b[i - 1][0] = a[i][0]

for i in range(n):
  for j in range(n):
    print(b[i][j], end = '')
  print()