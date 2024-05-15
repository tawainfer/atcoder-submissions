import sys
import bisect

n = int(input())
a = list(map(int, input().split()))
b = []
b.append(0)
for i in range(n):
  if i == 0:
    b.append(a[0])
  else:
    b.append(b[-1] + a[i])

for i in range(n):
  b.append(b[-1] + a[i])

s = b[-1]
if s % 10:
  print("No")
  sys.exit()
s //= 10

ans = False
for i in range(n):
  t = b[i] + b[n] / 10
  if bisect.bisect_right(b, t) - bisect.bisect_left(b, t) > 0:
    ans = True

print("Yes" if ans else "No")