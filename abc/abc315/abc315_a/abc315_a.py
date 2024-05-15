s = input()
for c in s:
  if c not in {'a', 'e', 'i', 'o', 'u'}:
    print(c, end = '')