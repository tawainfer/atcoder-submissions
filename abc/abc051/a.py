# https://atcoder.jp/contests/abc051/submissions/35806215

s = input()
for i in range(len(s)):
  if s[i] == ",": print(" ", end = "")
  else: print(s[i], end = "")
