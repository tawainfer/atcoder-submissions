# https://atcoder.jp/contests/abc299/submissions/41488201

n = int(input())
s = input()

if s.find('|') < s.find('*') < s.rfind('|'):
  print('in')
else:
  print('out')
