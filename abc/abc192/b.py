# https://atcoder.jp/contests/abc192/submissions/37555572

import sys

s = input()
for i in range(len(s)):
  if i % 2 == 0:
    if s[i] < 'a':
      print("No")
      sys.exit()
  else:
    if s[i] > 'Z':
      print("No")
      sys.exit()

print("Yes")
