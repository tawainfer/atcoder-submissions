s = input()

l = list()
for c in s:
  l.append(c)
  if len(l) >= 3 and l[-3] == 'A' and l[-2] == 'B' and l[-1] == 'C':
    for _ in range(3):
      l.pop();

for c in l:
  print(c, end = '')
