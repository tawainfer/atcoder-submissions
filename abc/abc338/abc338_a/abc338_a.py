s = input()

if not('A' <= s[0] <= 'Z'):
  print('No')
  exit()

for i in range(1, len(s)):
  if not('a' <= s[i] <= 'z'):
    print('No')
    exit()

print('Yes')