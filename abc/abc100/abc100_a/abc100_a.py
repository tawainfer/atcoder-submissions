a, b = map(int, input().split())
ca = 0
cb = 0

v = []
for i in range(16):
  v.append(0)

i = 0
while i < 16:
  if v[i] == 0 and not(i == 15 and v[0] == 1) and not(i == 0 and v[15] == 1):
    ca += 1
    v[i] = 1
    i += 2
  else:
    i += 1

i = 0
while i < 16:
  if v[i] == 0 and not(i == 15 and v[0] == 2) and not(i == 0 and v[15] == 2):
    cb += 1
    v[i] = 2
    i += 2
  else:
    i += 1

if (ca >= a) and (cb >= b):
  print("Yay!")
else:
  print(":(")

# for i in range(16):
#   print(v[i], end = " ")