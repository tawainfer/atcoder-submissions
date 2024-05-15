s, t = map(int, input().split())

ans = 0
for a in range(0, 101):
  for b in range(0, 101):
    for c in range(0, 101):
      if a + b + c > s: continue
      if a * b * c > t: continue
      ans += 1

print(ans)