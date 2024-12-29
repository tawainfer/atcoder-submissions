a = list(map(int, input().split()))
a.sort()

if a.count(a[0]) == 3 and a.count(a[-1]) == 1 or a.count(a[0]) == 1 and a.count(a[-1]) == 3 or a.count(a[0]) == 2 and a.count(a[-1]) == 2:
  print('Yes')
else:
  print('No')