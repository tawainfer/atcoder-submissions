import re;
input()
print('YNeos'[not(re.search('o', s := input()) and not re.search('x', s))::2])