n, m = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

pa = 0
pb = 0
rank = 1

while not(pa == n and pb == m):
  if pa == n:
    b[pb] = rank
    pb += 1
  elif pb == m:
    a[pa] = rank
    pa += 1
  else:
    if a[pa] > b[pb]:
      b[pb] = rank
      pb += 1
    else:
      a[pa] = rank
      pa += 1
  rank += 1

print(*a)
print(*b)