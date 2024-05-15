k, x = map(int, input().split())
for i in range(x - k + 1, x + k):
  print(i, end = "")
  if i == x + k - 1:
    print()
  else:
    print(end = " ")