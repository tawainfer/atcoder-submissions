# https://atcoder.jp/contests/abc287/submissions/41925059

s = input()
t = input()

bf = [True]
for i in range(len(t)):
  if s[i] == t[i] or '?' in {s[i], t[i]}:
    bf.append(True)
  else:
    while len(bf) <= len(t):
      bf.append(False)
    break

bb = [True]
for i in range(1, len(t) + 1):
  if s[-i] == t[-i] or '?' in {s[-i], t[-i]}:
    bb.append(True)
  else:
    while len(bb) <= len(t):
      bb.append(False)
    break

for i in range(len(t) + 1):
  print('Yes' if bf[i] and bb[len(t) - i] else 'No')
