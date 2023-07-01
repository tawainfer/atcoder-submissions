# https://atcoder.jp/contests/abc303/submissions/41788527

n = int(input())
s = input()
t = input()

for i in range(n):
  if s[i] == t[i] or (s[i] in {'1', 'l'} and t[i] in {'1', 'l'} or (s[i] in {'0', 'o'} and t[i] in {'0', 'o'})): continue

  print('No')
  exit()
  
print('Yes')
