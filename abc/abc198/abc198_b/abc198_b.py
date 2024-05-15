s = input()
for i in range(10):
  t = '0' * i + s
  u = t[::-1]
  
  if t == u:
    print('Yes')
    exit()

print('No')