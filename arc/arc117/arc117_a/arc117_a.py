a, b = map(int, input().split())
ans = []

for i in range(a): ans.append(i + 1)
a = sum(ans)

for i in range(b): ans.append(-(i + 1))
b = a - sum(ans)

ans[-1 if a - b > 0 else 0] += b - a
print(*ans)