t = int(input())
n = int(input())

MAX = 500009
a = [0] * MAX

for _ in range(n):
  l, r = map(int, input().split())
  a[l] += 1
  a[r] -= 1

for i in range(1, t):
  a[i] += a[i - 1]

for i in range(t):
  print(a[i])