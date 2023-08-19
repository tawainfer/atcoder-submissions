# https://atcoder.jp/contests/abc315/submissions/44707347

s = input()
for c in s:
  if c not in {'a', 'e', 'i', 'o', 'u'}:
    print(c, end = '')
