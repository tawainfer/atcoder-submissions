# https://atcoder.jp/contests/abc345/submissions/51362074

import re

s = input()
ptn = '^<=+>$'
print('Yes' if re.search(ptn, s) else 'No')
