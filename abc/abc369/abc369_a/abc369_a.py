a, b = map(int, input().split())

ans = 0
for x in range(-1000, 1000):
  l = [a, b, x]
  l.sort()
  if l[1] - l[0] == l[2] - l[1]:
    ans += 1

print(ans)