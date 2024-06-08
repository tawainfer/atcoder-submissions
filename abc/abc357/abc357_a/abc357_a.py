n, m = map(int, input().split())
h = list(map(int, input().split()))

ans = 0
for x in h:
  if m - x < 0:
    break
  ans += 1
  m -= x
print(ans)