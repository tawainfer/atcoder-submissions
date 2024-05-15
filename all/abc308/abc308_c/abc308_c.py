from decimal import Decimal, getcontext
getcontext().prec = 100

n = int(input())

ans = []
for i in range(n):
  a, b = map(int, input().split())
  ans.append((-(Decimal(a) / Decimal(a + b)), i + 1))
ans.sort()

for t in ans:
  print(t[1], end = ' ')