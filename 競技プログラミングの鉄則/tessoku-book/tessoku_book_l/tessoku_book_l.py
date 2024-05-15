n, k = map(int, input().split())
a = list(map(int, input().split()))
INIT = 1000000009

ok = 0
ng = INIT
while ng - ok > 1:
  mid = (ok + ng) // 2
  
  cnt = 0
  for x in a:
    cnt += mid // x
  
  if cnt < k: ok = mid
  else: ng = mid

print(ok + 1)