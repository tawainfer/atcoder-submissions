r, g, b = map(int, input().split())
c = input()

if c == "Red":
  print(min(g, b))
elif c == "Green":
  print(min(b, r))
else:
  print(min(r, g))