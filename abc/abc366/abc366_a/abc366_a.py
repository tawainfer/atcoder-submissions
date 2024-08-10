n, t, a = map(int, input().split())

if t >= n // 2 + 1 or a >= n // 2 + 1:
  print('Yes')
else:
  print('No')