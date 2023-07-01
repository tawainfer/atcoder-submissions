# https://atcoder.jp/contests/abc180/submissions/39129010

x, y, a, b = map(int, input().split())
exp = 0

while x * a < y and a * x <= x + b:
  x *= a
  exp += 1

exp += (y - x - 1) // b
print(exp)
