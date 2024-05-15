n = int(input())

MAX = 1509
f = [[0] * MAX for _ in range(MAX)]

for _ in range(n):
  x, y = map(int, input().split())
  f[x][y] += 1

for i in range(1, MAX):
  for j in range(1, MAX):
    f[i][j] += f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1]

q = int(input())
for _ in range(q):
  a, b, c, d = map(int, input().split())
  print(f[c][d] - f[a - 1][d] - f[c][b - 1] + f[a - 1][b - 1])