# https://atcoder.jp/contests/abc285/submissions/38099684

s = input()[::-1]
ans = 0

n = 1
for i in range(len(s)):
  x = ord(s[i]) - 64
  ans += x * n
  n *= 26

print(ans)
