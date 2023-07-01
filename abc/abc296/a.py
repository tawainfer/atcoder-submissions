# https://atcoder.jp/contests/abc296/submissions/40279430

if not(~-int(input())):
  print('Yes')
  exit()

s = input()
t = ''
for c in s: t += '0' if c == 'M' else '1'

for i in range(len(s) - 1):
  if not int(t[i]) ^ int(t[i + 1]):
    print('No')
    exit()

print('Yes')
