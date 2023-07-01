# https://atcoder.jp/contests/abc282/submissions/37371559

n = int(input())
s = input()
cover = False

for c in s:
  if c == ',':
    print(',' if cover else '.', end = '')
  else:
    print(c, end = '')
    if c == '"':
      cover = not cover
