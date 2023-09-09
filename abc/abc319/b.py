# https://atcoder.jp/contests/abc319/submissions/45429350

n = int(input())

for i in range(n + 1):
  ans = 0
  for j in range(1, 10):
    if n % j == 0 and i % (n // j) == 0:
      ans = j
      break
  print(ans if ans != 0 else '-', end = '')
