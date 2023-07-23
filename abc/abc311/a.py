# https://atcoder.jp/contests/abc311/submissions/43890907

n = int(input())
s = input()

set = set()
for i in range(n):
  set.add(s[i])

  check = True
  for j in range(65, 68):
    c = chr(j)
    if c not in set:
      check = False

  if check:
    print(i + 1)
    exit()

