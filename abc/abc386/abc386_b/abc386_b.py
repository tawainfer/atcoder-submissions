v = list(input())
ans = 0

for c in v:
  if c != '0':
    ans += 1

v.append('!')
cnt = 0
for c in v:
  if c == '0':
    cnt += 1
  else:
    ans += (cnt + 1) // 2
    cnt = 0

print(ans)