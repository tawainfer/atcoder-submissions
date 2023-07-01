# https://atcoder.jp/contests/abc050/submissions/42078598

n = int(input())
a = list(map(int, input().split()))
mod = 1000000007

cnt = [0] * n
for x in a:
  if n % 2 == 0:
    if x % 2 == 0:
      print(0)
      exit()

    p1 = n // 2 + (x - 1) // 2
    p2 = -(n // 2 + (x - 1) // 2 + 1)
    if not(0 <= p1 < n):
      print(0)
      exit()

    cnt[p1] += 1
    cnt[p2] += 1
  else:
    if x % 2 == 1:
      print(0)
      exit()

    if x == 0:
      cnt[n // 2] += 1
      continue

    p1 = n // 2 + x // 2
    p2 = -(n // 2 + (x - 1) // 2 + 2)
    if not(0 <= p1 < n):
      print(0)
      exit()

    cnt[p1] += 1
    cnt[p2] += 1

ans = 0
for i in range(n // 2):
  if cnt[i] != 2:
    print(0)
    exit()

if n % 2 == 1 and cnt[n // 2] != 1:
  print(0)
  exit()

print(pow(2, n // 2, mod))
