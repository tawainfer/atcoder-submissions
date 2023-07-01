# https://atcoder.jp/contests/abc245/submissions/37706128

n = int(input())
a = list(map(int, input().split()))

check = []
for _ in range(2002):
  check.append(False)

for x in a:
  check[x] = True

for i in range(2002):
  if not check[i]:
    print(i)
    break
