n = int(input())
s = input()

l = 0
r = 0
for i in range(n - 1, -1, -1):
  if s[i] == '(': l += 1
  else: r += 1
  
  if l > 0 and r == 0:
    s += ')'
    l -= 1
  elif l > 0 and r > 0:
    l -= 1
    r -= 1

print('(' * r + s)