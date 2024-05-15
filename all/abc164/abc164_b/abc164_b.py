import sys
a, b, c, d = map(int, input().split())

turn = 0
while "loop":
  if turn % 2 == 0:
    c -= b
    if c <= 0:
      print("Yes")
      sys.exit()
  else:
    a -= d
    if a <= 0:
      print("No")
      sys.exit()

  turn += 1