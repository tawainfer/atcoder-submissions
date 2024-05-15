import collections

q = int(input())

queue = collections.deque()
for _ in range(q):
  t = input().split()
  if len(t) == 2: x = t[1]
  t = int(t[0])

  if t == 1:
    queue.append(x)
  
  if t == 2:
    print(queue[0])
  
  if t == 3:
    queue.popleft()