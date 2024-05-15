n = int(input())
a = []
b = []
for _ in range(n):
  x, y = map(int, input().split())
  a.append(x)
  b.append(y)

ans = 0

while len(a) > 0:
  ans += (b[-1] - (a[-1] + ans) % b[-1]) % b[-1]
  a.pop()
  b.pop()

print(ans)