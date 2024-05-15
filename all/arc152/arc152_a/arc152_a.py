import sys

n, l = map(int, input().split())
a = list(map(int, input().split()))

for x in a:
  if x == 1:
    if l > 0:
      l -= 2
  else:
    if l > 1:
      l -= 3
    else:
      print("No")
      sys.exit()

print("Yes")