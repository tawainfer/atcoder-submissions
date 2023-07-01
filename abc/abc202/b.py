# https://atcoder.jp/contests/abc202/submissions/37420751

s = input()
ans = ""

for c in s:
  if c == '6':
    c = '9'
  elif c == '9':
    c = '6'
  ans += c

print(ans[::-1])
