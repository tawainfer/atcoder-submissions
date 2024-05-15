x, y = map(int, input().split())
ans = 0
if x == y == 1:
  print(1000000)
else:
  if x <= 3: ans += 400000 - 100000 * x
  if y <= 3: ans += 400000 - 100000 * y
  print(ans)