n, q = map(int, input().split())
a = list(map(int, input().split()))
b = []

ans = 0
for i in range(1, n):
  b.append(a[i] - a[i - 1])
  ans += abs(a[i] - a[i - 1])
b.append(0)

for _ in range(q):
  l, r, v = map(int, input().split())
  l -= 1
  r -= 1

  bef = abs(b[l - 1]) + abs(b[r])
  if l > 0:
    b[l - 1] += v
  if r < n - 1:
    b[r] -= v

  aft = 0
  if l > 0:
    aft = abs(b[l - 1]) + abs(b[r])
  else:
    aft = abs(b[r])
  
  ans += aft - bef
  print(ans)