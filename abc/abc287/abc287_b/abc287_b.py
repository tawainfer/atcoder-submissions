n, m = map(int, input().split())
s = []
t = []

for _ in range(n):
  s.append(input()[3:])

for _ in range(m):
  t.append(input())

ans = 0
for i in range(n):
  for j in range(m):
    if s[i] == t[j]:
      ans += 1
      break

print(ans)