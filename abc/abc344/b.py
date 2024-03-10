# https://atcoder.jp/contests/abc344/submissions/51110968

ans = list()
while 1:
  x = int(input())
  ans.append(x)
  if x == 0:
    break

ans.reverse()
for x in ans:
  print(x) 
