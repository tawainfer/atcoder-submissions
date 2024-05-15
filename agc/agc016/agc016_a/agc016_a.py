import string

s = input()
flag = True
for c in s:
  if s[0] != c:
    flag = False

if flag:
  print(0)
else:
  ans = 1e9
  ptn = list(string.ascii_lowercase)
  
  for c in ptn:
    cnt = 0
    x = s

    while len(x) > 1:
      cnt += 1
      y = ""

      for i in range(len(x) - 1):
        if x[i] == c or x[i + 1] == c:
          y += c
        else:
          y += x[i]
      
      flag = True
      for a in y:
        if y[0] != a:
          flag = False
      
      if flag:
        break
      x = y

    ans = min(ans, cnt)
  
  print(ans)