# https://atcoder.jp/contests/abc348/submissions/52128778

def f(x1, y1, x2, y2):
  return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)

n = int(input())
x = []
y = []
for _ in range(n):
  a, b = map(int, input().split())
  x.append(a)
  y.append(b)

for i in range(n):
  ma = -1
  ans = -1
  for j in range(n):
    if f(x[i], y[i], x[j], y[j]) > ma:
      ma = f(x[i], y[i], x[j], y[j])
      ans = j + 1
  print(ans)
