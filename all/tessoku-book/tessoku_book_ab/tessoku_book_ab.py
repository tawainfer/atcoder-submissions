n = int(input())
base = 0

for _ in range(n):
  t, a = map(str, input().split())
  a = int(a)

  if t == '+':
    base += a
  
  if t == '-':
    base -= a
  
  if t == '*':
    base *= a

  base %= 10000
  print(base)