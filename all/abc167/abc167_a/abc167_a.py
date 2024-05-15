s = input()
t = input()
cnt = 0
ans = True
while cnt < len(s):
  if s[cnt] != t[cnt]: ans = False
  cnt += 1
print("Yes" if ans == True else "No")