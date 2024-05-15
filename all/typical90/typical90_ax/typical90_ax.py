n, l = map(int, input().split())
a = [0] * (n + 1)
a[0] = 1

mod = 1000000007
for i in range(1, n + 1):
  if i < l:
    a[i] = a[i - 1]
    a[i] %= mod
  else:
    a[i] = a[i - 1] + a[i - l]
    a[i] %= mod

print(a[n])