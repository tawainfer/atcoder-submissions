n = int(input())
l = list()

for i in range(n):
  l.append(input())

for i in range(1, n - 1):
  if l[i - 1] == l[i] and l[i] == 'sweet':
    print('No')
    exit()

print('Yes')