# https://atcoder.jp/contests/abc101/submissions/35030260

s = input()
x = 0
i = 0
while i < 4:
  if s[i] == '+': x += 1
  else: x -= 1
  i += 1
print(x)
