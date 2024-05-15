n, q = map(int, input().split())
a = list(map(int, input().split()))

pos = 0
for _ in range(q):
  t, x, y = map(int, input().split())
  x -= 1
  y -= 1

  if t == 1:
    z = a[(x + pos) % n]
    a[(x + pos) % n] = a[(y + pos) % n]
    a[(y + pos) % n] = z
  elif t == 2:
    pos -= 1
  else:
    print(a[(x + pos) % n])