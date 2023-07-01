# https://atcoder.jp/contests/abc281/submissions/37224410

import re

s = input()
ptn = "[A-Z][1-9][0-9]{5}[A-Z]";
ans = re.match(ptn, s);

if ans: print("Yes")
else: print("No")
