n = int(input())
s = input()

if s.find('|') < s.find('*') < s.rfind('|'):
  print('in')
else:
  print('out')