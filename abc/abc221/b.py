# https://atcoder.jp/contests/abc221/submissions/40377697

s = input()
t = input()

l = []
for i in range(len(s)):
  if s[i] != t[i]:
    l.append(i)

if len(l) == 0:
  print('Yes')
elif len(l) == 2:
  if s[l[0]] == t[l[1]] and s[l[1]] == t[l[0]] and not (~l[0] + l[1]): print('Yes')
  else: print('No')
else:
  print('No')
