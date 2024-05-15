n = int(input())
ans = 2e9

for _ in range(n):
  a, p, x = list(map(int, input().split()))
  if a < x:
    ans = min(ans, p)

if ans == 2e9:
  ans = -1
print(ans)