# https://atcoder.jp/contests/abc342/submissions/50558257

s = input()
for i in range(len(s)):
  if s.count(s[i]) == 1:
    print(i + 1)
    exit()
