# https://atcoder.jp/contests/abc230/submissions/37705226

import re

s = input()
t = "oxx" * 100000

ans = False
if re.search(s, t):
  ans = True

print("Yes" if ans else "No")
