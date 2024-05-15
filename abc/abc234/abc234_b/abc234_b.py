import math

n = int(input())
x = []
y = []
for _ in range(n):
  a, b = map(int, input().split())
  x.append(a)
  y.append(b)

ans = 0
for i in range(n):
  for j in range(i + 1, n):
    ans = max(math.sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j])), ans)

print(ans)