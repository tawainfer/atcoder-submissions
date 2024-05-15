h, w = map(int, input().split())
v = [list(input()) for _ in range(h)]

for j in range(w):
  cnt = 0
  for i in range(h):
    if v[i][j] == '#':
      cnt += 1

  print(cnt)