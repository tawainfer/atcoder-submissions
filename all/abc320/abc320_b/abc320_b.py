s = input()
ans = 0

for i in range(len(s)):
  for j in range(i, len(s)):
    t = s[i:j+1]
    u = t[::-1]
    if t == u:
      ans = max(ans, len(t))

print(ans)