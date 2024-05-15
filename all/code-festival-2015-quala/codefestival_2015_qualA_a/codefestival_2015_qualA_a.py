s = input()
se = set()

for i in range(3, len(s)):
  if s[i - 3 : i + 1] == '2014':
    se.add(i)

for i in range(len(s)):
  print('5' if i in se else s[i], end = '')
print()