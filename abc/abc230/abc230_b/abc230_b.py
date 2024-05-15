import re

s = input()
t = "oxx" * 100000

ans = False
if re.search(s, t):
  ans = True

print("Yes" if ans else "No")