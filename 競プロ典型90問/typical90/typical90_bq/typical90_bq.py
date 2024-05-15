n, k = map(int, input().split())
mod = 1000000007

if k < 3:
  if k == 1:
    print(1 if n == 1 else 0)
  else:
    print(2 if n < 3 else 0)
else:
  if n == 1:
    print(k)
  elif n == 2:
    print(k * (k - 1) % mod)
  else:
    ans = k * (k - 1) % mod
    p = n - 2
    x = k - 2

    for i in range(60):
      if p & (1 << i):
        ans *= x
        ans %= mod

      x *= x
      x %= mod

    print(ans)