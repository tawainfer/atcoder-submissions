n, k = map(int, input().split())
cnt = 0
for i in range(1, n + 1):
  if i % 2: cnt += 1
if cnt >= k: print("YES")
else: print("NO")