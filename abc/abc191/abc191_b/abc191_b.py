n, x = map(int, input().split())
a = list(map(int, input().split()))
for i in range(n):
  if a[i] != x:
    print(a[i], end = "")
  if i != n - 1:
    print(end = " ")
  else:
    print()