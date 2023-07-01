# https://atcoder.jp/contests/abc179/submissions/34713858

s = input()
if s[len(s) - 1] == 's':
  print(s[:len(s)] + 'es')
else:
  print(s[:len(s)] + 's')
