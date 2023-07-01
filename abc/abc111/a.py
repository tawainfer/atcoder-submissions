# https://atcoder.jp/contests/abc111/submissions/34901742

s = input()
i = 0
while i < len(s):
  print('9' if s[i] == '1' else '1', end = "")
  i += 1
