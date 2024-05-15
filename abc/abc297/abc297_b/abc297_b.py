s = input()
t1 = []
t2= []
t3 = -1
n = len(s)

for i in range(n):
  if s[i] == 'B': t1.append(i)
  if s[i] == 'R': t2.append(i)
  if s[i] == 'K': t3 = i

if t1[0] %2 != t1[1] % 2 and t2[0] < t3 < t2[1]:
  print('Yes')
else:
  print('No')