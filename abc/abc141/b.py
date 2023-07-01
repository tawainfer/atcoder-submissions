# https://atcoder.jp/contests/abc141/submissions/38146006

s = input()
for i in range(len(s)):
  if i % 2:
    if s[i] == 'R':
      print("No")
      break
  else:
    if s[i] == "L":
      print("No")
      break

  if i == len(s) - 1:
    print("Yes")
