import heapq
n, k = map(int, input().split())
a = []
b = []
for _ in range(n):
  x, y = map(int, input().split())
  a.append(x)
  b.append(y)

q = []
for i in range(n):
  heapq.heappush(q, [-b[i], i])

ans = 0
for _ in range(k):
  t = heapq.heappop(q)
  x = -t[0]
  y = t[1]

  ans += x
  if y != -1:
    heapq.heappush(q, [-(a[y] - x), -1])

print(ans)