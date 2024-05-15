s = input()
c = 0
ans = 0
while c < 9:
  if s[c] == "Z" and s[c + 1] == "O" and s[c + 2] == "N" and s[c + 3] == "e": ans += 1
  c += 1
print(ans)