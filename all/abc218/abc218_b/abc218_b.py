s = "!abcdefghijklmnopqrstuvwxyz"
p = list(map(int, input().split()))

for x in p:
  print(s[x], end = "")