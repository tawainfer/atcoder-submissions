n = int(input())
a = list(map(int, input().split()))

for i in range(n):
  if i == 0:
    print(a[i], end = " ")
  else:
    print(a[i] - a[i - 1], end = " ")