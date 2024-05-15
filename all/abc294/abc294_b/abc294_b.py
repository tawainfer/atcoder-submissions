h, w = map(int, input().split())
a = [list(map(int, input().split())) for _ in range(h)]

for i in range(h):
  for j in range(w):
    print(chr(a[i][j] + 64) if a[i][j] else '.', end = '')
  print()