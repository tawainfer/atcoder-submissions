h, w = map(int, input().split())
l = [list(input()) for _ in range(h)]

py = px = sy = sx = -1
for i in range(h):
  for j in range(w):
    if l[i][j] == 'o':
      if py == -1:
        py = i
        px = j
      else:
        sy = i
        sx = j

print(abs(py - sy) + abs(px - sx))