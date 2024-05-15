import math

n = int(input())
p = []

for i in range(2, int(math.sqrt(n)) + 2):
  while n > 0 and n % i == 0:
    p.append(i)
    n //= i

if n > 1:
  p.append(n)

if len(p) < 2:
  print(0)
else:
  print(math.ceil(math.log2(len(p))))