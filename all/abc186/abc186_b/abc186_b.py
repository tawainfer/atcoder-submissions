h, w = map(int, input().split())
a = []
for _ in range(h):
  a.append(list(map(int, input().split())))

mi = 1e9
for i in range(h):
  for j in range(w):
    mi = min(mi, a[i][j])

ans = 0
for i in range(h):
  for j in range(w):
    ans += a[i][j] - mi

print(ans)