n = int(input())
l = []
for _ in range(n):
  s = input()
  l.append(s)
  
for i in range(n):
  for j in range(n):
    if i == j:
      continue
      
    s = l[i] + l[j]
    t = s[::-1]
    
    if s == t:
      print('Yes')
      exit()
      
print('No')