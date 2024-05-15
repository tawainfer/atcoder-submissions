d = int(input())
x = int(input())
a = [x] + [int(input()) for i in range(1, d)]
q = int(input())
p = [list(map(int, input().split())) for i in range(q)]

for i in range(len(a) - 1):
  a[i + 1] = a[i] + a[i + 1]

for i in range(q):
  s, t = p[i]
  s -= 1
  t -= 1
  if a[s] > a[t]:
    print(s + 1)
  elif a[s] == a[t]:
    print('Same')
  else:
    print(t + 1)