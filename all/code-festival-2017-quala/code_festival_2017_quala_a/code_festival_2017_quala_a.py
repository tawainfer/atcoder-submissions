s = input()
ans = False

if len(s) >= 4:
  for i in range(1):
    if s[:4] == "YAKI":
      ans = True
  if ans:
    print("Yes")
  else:
    print("No")

else:
  print("No")