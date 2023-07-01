# https://atcoder.jp/contests/abc244/submissions/37582793

n = int(input())
t = input()

cx = 0
cy = 0

pos = 0
dx = [1, 0, -1, 0]
dy = [0, -1, 0, 1]

for c in t:
  if c == 'S':
    cx += dx[pos]
    cy += dy[pos]
  else:
    pos += 1
    pos %= 4

print(cx, cy)
