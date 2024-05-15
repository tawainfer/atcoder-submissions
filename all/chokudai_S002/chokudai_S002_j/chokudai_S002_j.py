import math

n = int(input())
x = -1
y = -1

for _ in range(n):
  a, b = map(int, input().split())
  if x == y == -1:
    x, y = a, b
    continue

  x, y = max(math.gcd(a, x), math.gcd(a, y)), max(math.gcd(b, x), math.gcd(b, y))

print(max(x, y))