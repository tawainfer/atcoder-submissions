import sys

n, s, d = map(int, input().split())

while n > 0:
  n -= 1
  x, y = map(int, input().split())

  if x < s and y > d:
    print("Yes")
    sys.exit()

print("No")