n = int(input())
s = input() + '<'

ans = 0
cnt = 0
for c in s:
  if c == '<':
    ans += cnt * (cnt + 1) // 2
    cnt = 0
  elif c == '>':
    cnt += 1

print(ans)