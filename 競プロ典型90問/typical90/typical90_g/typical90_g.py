n = int(input())
a = sorted(list(map(int, input().split())))
q = int(input())

for _ in range(q):
  b = int(input())
  ok = -1
  ng = len(a)

  while ng - ok > 1:
    mid = (ok + ng) // 2
    if a[mid] <= b:
      ok = mid
    else:
      ng = mid
  
  mi = 1e9
  if 0 <= ok < len(a):
    mi = min(mi, abs(a[ok] - b))
  if 0 <= ng < len(a):
    mi = min(mi, abs(a[ng] - b))

  print(mi)