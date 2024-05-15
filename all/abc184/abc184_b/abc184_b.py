n, x = map(int, input().split())
s = input()

ans = x
for c in s:
  if c == 'o':
    ans += 1
  else:
    ans = max(ans - 1, 0)

print(ans)