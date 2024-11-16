s = list(input())
s.sort()
t = '122333'

for i in range(len(s)):
  if s[i] != t[i]:
    print('No')
    exit()

print('Yes')