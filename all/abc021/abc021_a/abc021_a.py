n = int(input())
v = []

while n > 0:
  if n == 1:
    n = 0
    v.append(1)
  else:
    n -= 2
    v.append(2)

print(len(v))
for x in v:
  print(x)