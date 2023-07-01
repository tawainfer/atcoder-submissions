# https://atcoder.jp/contests/abc301/submissions/41401924

s = input()
n = int(input())

t = s.replace('?', '0')
x = int(t, 2)

if x > n:
  print('-1')
  exit()

while s.count('?') > 0:
  t = s.replace('?', '1', 1).replace('?', '0')
  x = int(t, 2)
  
  if x <= n: s = s.replace('?', '1', 1)
  else: s = s.replace('?', '0', 1)

ans = int(s, 2)
print(ans)

