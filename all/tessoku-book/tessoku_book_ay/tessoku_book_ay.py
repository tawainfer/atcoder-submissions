q = int(input())

stack = []
for _ in range(q):
  t = input().split()
  if len(t) == 2: x = t[1]
  t = int(t[0])

  if t == 1:
    stack.append(x)
  
  if t == 2:
    print(stack[-1])
  
  if t == 3:
    stack.pop()