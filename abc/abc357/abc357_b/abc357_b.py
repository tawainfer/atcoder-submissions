s = input()
upper = 0
lower = 0

for c in s:
  if c <= 'Z':
    upper += 1
  else:
    lower += 1

if upper >= lower:
  print(s.upper())
else:
  print(s.lower())