# https://atcoder.jp/contests/agc015/submissions/37471117

s = input()

n = len(s)
ans = 0

for i in range(n):
  if s[i] == 'U':
    ans += (n - i - 1) + i * 2
  else:
    ans += (n - i - 1) * 2 + i

print(ans)
