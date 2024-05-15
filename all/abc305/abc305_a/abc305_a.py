n = int(input())
spot = set()

for i in range(0, 101, 5):
  spot.add(i)
  
INF = 1e9
ans = INF

for i in range(n, -1, -1):
  if i in spot:
    ans = min(ans, n - i)
    break

for i in range(n, 101):
  if i in spot:
    ans = min(ans, i - n)
    break

ans = ans + n if (n + ans) % 5 == 0 else n - ans
print(ans)