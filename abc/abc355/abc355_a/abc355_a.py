a, b = map(int, input().split())

if a == b:
  print(-1)
  exit()

for i in range(1, 4):
  if i != a and i != b:
    print(i)