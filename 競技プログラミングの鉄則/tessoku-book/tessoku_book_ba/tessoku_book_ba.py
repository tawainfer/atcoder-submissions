import heapq

q = int(input())
a = []
heapq.heapify(a)

for _ in range(q):
  t = input().split()
  if len(t) == 2: x = int(t[1])
  t = int(t[0])

  if t == 1:
    heapq.heappush(a, x)
  
  if t == 2:
    print(z := heapq.heappop(a))
    heapq.heappush(a, z)

  if t == 3:
    heapq.heappop(a)