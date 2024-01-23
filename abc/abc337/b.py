# https://atcoder.jp/contests/abc337/submissions/49591638

s = list(input())
t = []
for c in s:
  t.append(c)

t.sort()
for i in range(len(s)):
  if s[i] != t[i]:
    print('No')
    exit()

print('Yes')
