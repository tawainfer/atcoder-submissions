s, t, x = map(int, input().split())

v = []
for i in range(24):
  v.append(0)

if s < t:
  for i in range(s, t):
    v[i] = 1
else:
  for i in range(t, s):
    v[i] = 1

if s < t:
  if v[x] == 1:
    print("Yes")
  else:
    print("No")
else:
  if v[x] == 1:
    print("No")
  else:
    print("Yes")