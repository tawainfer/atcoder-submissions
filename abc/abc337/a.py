# https://atcoder.jp/contests/abc337/submissions/49591539

n = int(input())

t = 0
a = 0
for _ in range(n):
  x, y = map(int, input().split())
  t += x
  a += y

if t > a:
  print('Takahashi')
elif t < a:
  print('Aoki')
else:
  print('Draw')
