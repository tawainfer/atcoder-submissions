# https://atcoder.jp/contests/abc297/submissions/40502016

h, w = map(int, input().split())
c = [list(input()) for _ in range(h)]

for i in range(h):
  cnt = 0
  
  for j in range(w):
    if c[i][j] == 'T': cnt += 1
    else: cnt = 0

    if cnt == 2:
      c[i][j - 1] = 'P'
      c[i][j] = 'C'
      cnt = 0

for i in range(h):
  for j in range(w):
    print(c[i][j], end = '')
  print()
