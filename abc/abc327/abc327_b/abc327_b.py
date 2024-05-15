def pow(x, y):
  res = 1
  for i in range(y):
    res *= x

  return res

b = int(input())
for i in range(1, 1000000):
  r = pow(i, i)
  if r > b:
    break

  if r == b:
    print(i)
    exit()

print(-1)