n, k = map(int, input().split())
s = input()

for c in s:
  if k <= 0 and c == 'o':
    print('x', end = '')
  else:
    print(c, end = '')
    if c == 'o':
      k -= 1
