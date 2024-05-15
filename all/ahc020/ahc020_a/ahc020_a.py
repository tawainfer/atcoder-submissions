import random

n, m, k = map(int, input().split())

p = []
for _ in range(n):
  p.append(random.randint(1000, 5000))

b = []
for _ in range(m):
  b.append(min(1, random.randint(0, 4)))

print(*p)
print(*b)