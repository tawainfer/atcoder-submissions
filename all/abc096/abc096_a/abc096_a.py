a, b = map(int, input().split())
ans = 0

for i in range(1, a + 1):
  for j in range(1, 32):
    if i == j:
      ans += 1
    if i == a and j == b:
      break

print(ans)