h, w = map(int, input().split())
a = [list(map(int, input().split())) for _ in range(h)]
b = [list(map(int, input().split())) for _ in range(h)]
c = [[0] * w for _ in range(h)]

for i in range(h):
  for j in range(w):
    c[i][j] = b[i][j] - a[i][j]

cnt = 0
for i in range(h - 1):
  for j in range(w - 1):
    if c[i][j] != 0:
      cnt += abs(c[i][j])
      c[i + 1][j + 1] -= c[i][j]
      c[i][j + 1] -= c[i][j]
      c[i + 1][j] -= c[i][j]
      c[i][j] -= c[i][j]

ans = True
for i in range(h):
  if c[i][-1] != 0:
    ans = False

for j in range(w):
  if c[-1][j] != 0:
    ans = False

print("Yes\n{}".format(cnt) if ans else "No")