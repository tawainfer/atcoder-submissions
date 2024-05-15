n = int(input())
a = []
for _ in range(n):
  l, r = map(int, input().split())
  a.append((r, l))
a.sort()

t = 0
ans = 0

for p in a:
  r, l = p

  if t <= l:
    ans += 1
    t = r

print(ans)