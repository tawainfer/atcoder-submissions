n, k = map(int, input().split())
a = list(map(int, input().split()))

if n == 1:
  print('Yes' if k in a else 'No')
  exit()

b = []
for _ in range(n // 2):
  b.append(a.pop())

c = set()
d = set()

for bit in range(1 << len(a)):
  sum = 0
  
  for i in range(n):
    if bit & (1 << i):
      sum += a[i]

  c.add(sum)

for bit in range(1 << len(b)):
  sum = 0
  
  for i in range(n):
    if bit & (1 << i):
      sum += b[i]

  d.add(sum)

c = list(c)
d = list(d)
c.sort()
d.sort()

for i in range(len(c)):
  l = -1
  r = len(d)

  while r - l > 1:
    mid = (l + r) // 2
    
    if c[i] + d[mid] == k:
      print('Yes')
      exit()
    elif c[i] + d[mid] < k:
      l = mid
    elif c[i] + d[mid] > k:
      r = mid

print('No')