s = []
for i in range(3):
  s.append(input())

t = input()

for c in t:
  print(s[int(c) - 1], end = "")