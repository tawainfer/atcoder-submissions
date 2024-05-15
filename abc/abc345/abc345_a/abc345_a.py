import re

s = input()
ptn = '^<=+>$'
print('Yes' if re.search(ptn, s) else 'No')