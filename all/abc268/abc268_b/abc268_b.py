s = input()
t = input()
if len(s) > len(t): print("No")
else:
  ans = True
  cnt = 0
  while cnt < len(s):
    if s[cnt] != t[cnt]: ans = False
    cnt += 1
  print("Yes" if ans else "No")