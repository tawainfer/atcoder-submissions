def binary_search(ok, ng, n):
  while ng - ok > 0.001:
    mid = (ok + ng) / 2
    if mid * mid * mid + mid <= n + 0.001: ok = mid
    else: ng = mid

  return ok

n = int(input())
print(binary_search(0, 50, n))