q = int(input())

d = dict()
for _ in range(q):
  l = input().split()

  if l[0] == '1':
    d[l[1]] = int(l[2])
  
  if l[0] == '2':
    print(d[l[1]])