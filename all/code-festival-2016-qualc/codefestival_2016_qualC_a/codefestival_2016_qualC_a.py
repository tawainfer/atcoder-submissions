s = input()
c = False
f = False
for i in range(len(s)):
  if s[i] == 'C': c = True
  if c and s[i] == 'F': f = True
if c and f: print('Yes')
else: print('No')