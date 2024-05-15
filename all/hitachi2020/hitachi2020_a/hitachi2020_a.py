s = input()
ans = True

if len(s) % 2 == 0:
  i = 0
  while i < len(s):
    if not(s[i] == 'h' and s[i + 1] == 'i'):
      ans = False
    i += 2
  print("Yes" if ans else "No")
else: print("No")