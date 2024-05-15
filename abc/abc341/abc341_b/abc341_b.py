n = int(input())
a = list(map(int, input().split()))

s = list()
t = list()
for _ in range(n - 1):
  x, y = map(int, input().split())
  s.append(x)
  t.append(y)

for i in range(n - 1):
  a[i + 1] += a[i] // s[i] * t[i]

print(a[n - 1])