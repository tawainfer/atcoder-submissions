n = int(input())

MAX = 1509
f = [[0] * MAX for _ in range(MAX)]

for _ in range(n):
  a, b, c, d = map(int, input().split())
  a += 1
  b += 1

  f[a][b] += 1
  f[c + 1][d + 1] += 1
  f[a][d + 1] -= 1
  f[c + 1][b] -= 1

for i in range(1, MAX):
  for j in range(1, MAX):
    f[i][j] += f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1]

ans = 0
for i in range(1, MAX):
  for j in range(1, MAX):
    if f[i][j] >= 1:
      ans += 1

print(ans)