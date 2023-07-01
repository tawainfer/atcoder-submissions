# https://atcoder.jp/contests/abc226/submissions/34713044

s = input()
n = float(s) // 1
cnt = 0
up = False
while cnt < len(s) - 1:
  if s[cnt] == '.':
    if s[cnt + 1] > '4': up = True
  cnt += 1
print(round(n + 1) if up else round(n))
