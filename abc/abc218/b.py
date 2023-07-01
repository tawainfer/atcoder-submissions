# https://atcoder.jp/contests/abc218/submissions/37372078

s = "!abcdefghijklmnopqrstuvwxyz"
p = list(map(int, input().split()))

for x in p:
  print(s[x], end = "")
