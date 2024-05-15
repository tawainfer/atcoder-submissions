def binary_search(ok, ng, k):
  while ng - ok > 1:
    mid = (ok + ng) // 2
    if a[mid] <= k: ok = mid
    else: ng = mid

  return ng - 1

def solve(n, k, a):
  ans = 0

  for i in range(n):
    ans += binary_search(i, n, a[i] + k) - i
    # print(i, ans)
  print(ans)

n, k = map(int, input().split())
a = list(map(int, input().split()))
solve(n, k, a)