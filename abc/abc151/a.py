# https://atcoder.jp/contests/abc151/submissions/34707899

s = "abcdefghijklmnopqrstuvwxyz"
c = input()
cnt = 0
while cnt < 25:
  if c[0] == s[cnt]: print(s[cnt + 1])
  cnt += 1
