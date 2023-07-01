# https://atcoder.jp/contests/abc304/submissions/41971803

n = int(input())

l = []
mi = 2e9
pos = -1

for i in range(n):
  s, a = map(str, input().split())
  a = int(a)
  l.append(s)

  if mi > a:
    pos = i
    mi = a

cnt = n
for i in range(pos, pos + n):
  p = i % n
  print(l[p])
