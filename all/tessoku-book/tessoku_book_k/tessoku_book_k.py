n, x = map(int, input().split())
a = list(map(int, input().split()))

ok = -1
ng = n
while ng - ok > 1:
  mid = (ok + ng) // 2
  if a[mid] <= x: ok = mid
  else: ng = mid

print(ok + 1)