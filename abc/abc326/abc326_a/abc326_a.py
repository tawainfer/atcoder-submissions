x, y = map(int, input().split())
for i in range(x - 3, x + 3):
  if i == y:
    print('Yes')
    exit()
  
print('No')