d = int(input())
n = int(input())

a = [0] * 100009
for _ in range(n):
  l, r = map(int, input().split())
  a[l] += 1
  a[r + 1] -= 1

for i in range(1, d + 1):
  a[i] += a[i - 1]
  print(a[i])