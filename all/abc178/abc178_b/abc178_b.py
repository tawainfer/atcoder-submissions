a, b, c, d = map(int, input().split())
x = [a, b]
y = [c, d]

ans = -1e19
for i in x:
  for j in y:
    ans = max(ans, i * j)

print(ans)