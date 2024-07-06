n, k, x = map(int, input().split())
a = list(map(int, input().split()))

for i in range(len(a)):
  print(a[i], end = ' ')
  if i == k - 1:
    print(x, end = ' ')