input()
try:
  s=input();print('Yes' if s == '/' or eval(f'{s}') == 0.5 else 'No')
except:
  print('No')