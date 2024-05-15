n = int(input())
a = [0] + list(map(int, input().split()))

s = set()
for i in range(1, n + 1):
  if i not in s:
    s.add(a[i])

ans = []
for i in range(1, n + 1):
  if i not in s:
    ans.append(i)

print(len(ans))
print(*ans)