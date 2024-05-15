n = int(input())
x = []
y = []
for _ in range(n):
  a, b = map(int, input().split())
  x.append(a)
  y.append(b)
x.sort()
y.sort()

if n == 1:
  print(0)
  exit()

a = x[n // 2]
b = y[n // 2]

if n % 2 == 0:
  a += x[n // 2 - 1]
  b += y[n // 2 - 1]
else:
  a += a
  b += b

a = a * 10 // 2
b = b * 10 // 2

ans = 0
for i in range(n):
  ans += (abs(x[i] * 10 - a) + abs(y[i] * 10 - b))

print(ans // 10)