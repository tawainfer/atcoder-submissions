n = int(input())
a = list(map(int, input().split()))

d = dict()
for x in a:
  if x in d: d[x] += 1
  else: d[x] = 1

ans = 0
for x in d.values():
  ans += x // 2

print(ans)