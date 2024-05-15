n = int(input())
s = set()

for _ in range(n):
  a, b = map(int, input().split())
  a, b = sorted([a, b])
  s.add((a, b))

ans = 0
for _ in s: ans += 1
print(ans)