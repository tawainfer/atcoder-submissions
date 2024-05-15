n = int(input())
ans = 0

a = 0
b = 0
for _ in range(n):
  a, b = map(int, input().split())
  ans += (b - a + 1) * (a + b) // 2

print(ans)