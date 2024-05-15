n = int(input())
a = list(map(int, input().split()))

ma = -1e9
for x in a:
  ma = max(ma, x)

ma2 = -1e9
ans = -1
for i in range(n):
  if a[i] != ma:
    if ma2 < a[i]:
      ans = i + 1
      ma2 = a[i]

print(ans)