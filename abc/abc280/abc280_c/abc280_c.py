s = input()
t = input()

ans = min(len(s), len(t)) + 1
for i in range(min(len(s), len(t))):
  if s[i] != t[i]:
    ans = i + 1
    break

print(ans)