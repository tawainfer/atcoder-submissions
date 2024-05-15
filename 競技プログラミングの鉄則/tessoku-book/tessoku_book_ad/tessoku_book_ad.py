def divmod(a, b, m):
  return (a * pow(b, m - 2, m)) % m

n, r = map(int, input().split())
mod = 1000000007

u = d = 1
for i in range(1, n + 1): u = (u * i) % mod
for i in range(1, r + 1): d = (d * i) % mod
for i in range(1, n - r + 1): d = (d * i) % mod

print(divmod(u, d, mod))