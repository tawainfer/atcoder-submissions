h, w, n = map(int, input().split())
f = [[0] * 1509 for _ in range(1509)]

for _ in range(n):
  a, b, c, d = map(int, input().split())
  f[a][b] += 1
  f[c + 1][d + 1] += 1
  f[c + 1][b] -= 1
  f[a][d + 1] -= 1

for i in range(1, h + 1):
  for j in range(1, w + 1):

    f[i][j] += f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1]
    print(f[i][j], end = ' ')
  print()