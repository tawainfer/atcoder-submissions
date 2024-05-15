n = int(input())
ans = 1e9

for a in range(1, n):
  b = n - a
  
  sa = 0
  sb = 0

  for c in str(a):
    sa += int(c)
  
  for c in str(b):
    sb += int(c)
  
  ans = min(ans, sa + sb)

print(ans)