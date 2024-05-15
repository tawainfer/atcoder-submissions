def binary_search(ok, ng, x) -> int:
  while ng - ok > 1:
    mid = (ok + ng) // 2
    
    if a[mid] < x: ok = mid
    else: ng = mid

  return ok + 1

n = int(input())
a = list(map(int, input().split()))
a.sort()

q = int(input())
for _ in range(q):
  print(binary_search(-1, n, x := int(input())))