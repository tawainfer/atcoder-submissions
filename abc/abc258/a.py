# https://atcoder.jp/contests/abc258/submissions/34692031

h = 21
n = int(input())
if n > 59:
  h += 1
  n -= 60
print(h, ":", sep="", end="")
if n < 10: print(0, end="")
print(n)
