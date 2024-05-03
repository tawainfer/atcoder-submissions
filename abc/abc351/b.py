# https://atcoder.jp/contests/abc351/submissions/53035184

n = int(input())

a = list()
b = list()
for i in range(n):
  a.append(list(input()))
for i in range(n):
  b.append(list(input()))

for i in range(n):
  for j in range(n):
    if a[i][j] != b[i][j]:
      print(i + 1, j + 1)
