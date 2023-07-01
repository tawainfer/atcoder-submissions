# https://atcoder.jp/contests/abc279/submissions/37055262

s = input()
ans = 0

for i in range(len(s)):
  if s[i] == 'v': ans += 1
  else: ans += 2

print(ans)
