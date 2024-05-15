import math
n = int(input())

base = []
food = []
for i in range(n):
  a, b = map(int, input().split())
  food.append((i + 1, a, b))
  base.append((i + 1, a, b))

while len(food) > 1:
  f = []

  while len(food) > 0:
    if len(food) == 1:
      f.append(food.pop())
    else:
      i1, a1, b1 = food.pop()
      i2, a2, b2 = food.pop()
      if (a1 + b2 - 1) // b2 > (a2 + b1 - 1) // b1: f.append((i1, a1, b1))
      elif (a1 + b2 - 1) // b2 < (a2 + b1 - 1) // b1: f.append((i2, a2, b2))

  for x in f:
    food.append(x)

if len(food) == 1:
  i1, a1, b1 = food.pop()

  for t in base:
    i2, a2, b2 = t
    if i1 == i2: continue

    if (a1 + b2 - 1) // b2 <= (a2 + b1 - 1) // b1:
      print(-1)
      exit()
  
  print(i1)
else:
  print(-1)
