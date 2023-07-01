# https://atcoder.jp/contests/abc279/submissions/37403892

import re

s = input()
t = input()

if re.search(t, s) and (len(s) >= len(t)):
  print("Yes")
else:
  print("No")
