n, m = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

ans = []
for x in a:
  if not x in b:
    ans.append(x)

for x in b:
  if not x in a:
    ans.append(x)

ans = sorted(ans)
for x in ans:
  print(x, end = " ")