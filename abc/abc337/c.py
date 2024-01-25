# https://atcoder.jp/contests/abc337/submissions/49642625

n = int(input())
a = list(map(int, input().split()))

b = [-1] * n
for i in range(n):
  if a[i] == -1:
    continue
  b[a[i] - 1] = i

cp = -1
for i in range(n):
  if a[i] == -1:
    cp = i
    break

while b[cp] != -1:
  print(cp + 1, end = ' ')
  cp = b[cp]
print(cp + 1)
