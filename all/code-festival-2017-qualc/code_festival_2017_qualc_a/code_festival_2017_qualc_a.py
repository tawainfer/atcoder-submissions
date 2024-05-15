s = input()
ans = False

for i in range(len(s) - 1):
  if s[i] == 'A' and s[i + 1] == 'C':
    ans = True

if ans:
  print("Yes")
else:
  print("No")