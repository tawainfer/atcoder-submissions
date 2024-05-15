n = int(input())
a = list(map(int, input().split()))

ans = 0
for i in range(1, 101):
  ca = a.count(i)
  ans += (0 if ca < 3 else ca * (ca - 1) * (ca - 2) // 6)

print(ans)