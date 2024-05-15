import math
n = int(input())

for _ in range(n):
  a, b = map(int, input().split())
  print(abs(a - b) if abs(a - b) else -1)