# https://atcoder.jp/contests/abc219/submissions/37420852

s = []
for i in range(3):
  s.append(input())

t = input()

for c in t:
  print(s[int(c) - 1], end = "")
