import re

s = input()
t = input()

if re.search(t, s) and (len(s) >= len(t)):
  print("Yes")
else:
  print("No")