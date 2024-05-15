import time
time.sleep(1.9)

k, a, b = map(int, input().split())
n = 1

if a + 2 < b:
  n += min(k, a - n)
  k -= n - 1

  n += k // 2 * (b - a)
  if k % 2:
    n += 1

  print(n)
else:
  print(k + 1)