# https://atcoder.jp/contests/abc338/submissions/49754089

s = input()
cnt = 0
ans = '?'

for i in range(26):
  c = chr(97 + i)
  if cnt < s.count(c):
    cnt = s.count(c)
    ans = c

print(ans)
