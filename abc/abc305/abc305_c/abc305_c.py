h, w = map(int, input().split())
s = [input() for _ in range(h)]

a = -1
for i in range(h):
  if s[i].count('#') > 0:
    a = i
    break

b = -1
for i in range(h - 1, -1, -1):
  if s[i].count('#') > 0:
    b = i
    break

c = -1
for i in range(w):
  check = False

  for j in range(h):
    if s[j][i] == '#':
      check = True
      break
  
  if check:
    c = i
    break

d = -1
for i in range(w - 1, -1, -1):
  check = False

  for j in range(h):
    if s[j][i] == '#':
      check = True
      break
  
  if check:
    d = i
    break

# print(a, b, c, d)

for i in range(h):
  for j in range(w):
    if a <= i <= b and c <= j <= d and s[i][j] == '.':
      print(i + 1, j + 1)
      exit()