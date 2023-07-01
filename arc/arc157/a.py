# https://atcoder.jp/contests/arc157/submissions/39207537

n, a, b, c, d = map(int, input().split())

if abs(b - c) == 1:
  print('Yes')
elif abs(b - c) == 0:
  if b == 0:
    print('Yes' if a == 0 or d == 0 else 'No')
  else:
    print('Yes')
else:
  print('No')
