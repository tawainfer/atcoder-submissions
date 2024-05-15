n =  int(input())
a = list(map(int, input().split()))

print(a[0], end = ' ')
for i in range(1, n):
  if a[i - 1] < a[i]:
    for j in range(a[i - 1] + 1, a[i]):
      print(j, end = ' ')
  else:
    for j in range(a[i - 1] - 1, a[i], -1):
      print(j, end = ' ')
  print(a[i], end = ' ')