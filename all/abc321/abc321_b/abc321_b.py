n, x = map(int, input().split())
a = list(map(int, input().split()))

for i in range(101):
  b = list()
  for z in a:
    b.append(z)
  b.append(i)
  b.sort()

  sum = 0
  for j in range(1, n - 1):
    sum += b[j]
  
  if sum >= x:
    print(i)
    exit()

print(-1)