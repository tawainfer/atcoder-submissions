import random

l, n, s = map(int, input().split())
p = []
for _ in range(n):
  y, x = map(int, input().split())
  p.append((y, x))

r = random.randint(0, 1000)
for i in range(l):
  for j in range(l):
    print(r, end = ' ')
  print()

print("-1 -1 -1")
r = random.randint(0, n - 1)
for _ in range(n):
  print(r)