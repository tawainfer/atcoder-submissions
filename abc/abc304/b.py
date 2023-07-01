# https://atcoder.jp/contests/abc304/submissions/42007647

s = input()
for i in range(len(s)):
  print(s[i] if i < 3 else 0, end = '')
