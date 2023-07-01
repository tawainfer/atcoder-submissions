# https://atcoder.jp/contests/abc201/submissions/37584452

n = int(input())
s = []
t = []
for i in range(n):
  x, y = input().split()
  y = int(y)
  s.append([x, y])
  t.append(y)
t = sorted(t)

for i in range(n):
  if s[i][1] == t[-2]:
    print(s[i][0])
