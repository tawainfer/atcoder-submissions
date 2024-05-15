s = input()
for i in range(len(s)):
  if i % 2 != 0 and s[i] == '1':
    print('No')
    exit()

print('Yes')
