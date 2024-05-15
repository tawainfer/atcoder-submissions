s = input()
for i in range(len(s)):
  if i % 2:
    if s[i] == 'R':
      print("No")
      break
  else:
    if s[i] == "L":
      print("No")
      break

  if i == len(s) - 1:
    print("Yes")