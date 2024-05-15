n = int(input())
p = list(map(int, input().split()))

ma = max(p)
if p[0] == ma and p.count(ma) == 1:
  print(0)
else:
  print(ma - p[0] + 1)