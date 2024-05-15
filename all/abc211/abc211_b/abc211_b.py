s = []
for i in range(4):
  s.append(input())

ans = True
for i in range(4):
  for j in range(i + 1, 4):
    if s[i] == s[j]:
      ans = False

print("Yes" if ans else "No")