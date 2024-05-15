h, w = map(int, input().split())
x = [[0] * (w + 1) for _ in range(h + 1)]
y = [[0] * (w + 1) for _ in range(h + 1)]

for i in range(1, h + 1):
  l = [0] + list(map(int, input().split()))
  for j in range(1, w + 1):
    x[i][j] = l[j]

for i in range(1, h + 1):
  for j in range(1, w + 1):
    y[i][j] = y[i - 1][j] + y[i][j - 1] - y[i - 1][j - 1] + x[i][j]

q = int(input())
for _ in range(q):
  a, b, c, d = map(int, input().split())
  print(y[c][d] + y[a - 1][b - 1] - y[a - 1][d] - y[c][b - 1])