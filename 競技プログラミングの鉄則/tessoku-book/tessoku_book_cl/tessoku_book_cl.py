def binary_search(ok, ng, x, i) -> int:
  while ng - ok > 1:
    mid = (ok + ng) // 2
    
    if b[mid] - b[i - 1] <= x: ok = mid
    else: ng = mid

  return ok - i + 1

n, k = map(int, input().split())
a = [0] + list(map(int, input().split()))

b = [0]
for i in range(1, n + 1):
  b.append(b[-1] + a[i])

ans = 0
for i in range(1, n + 1):
  ans += binary_search(i - 1, n + 1, k, i)

print(ans)