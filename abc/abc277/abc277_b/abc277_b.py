n = int(input())
s = []
ans = True

for i in range(n):
  s.append(input())

for i in range(n):
  if not s[i][0] in {'H', 'D', 'C', 'S'}:
    ans = False
  if not s[i][1] in {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'}:
    ans = False

for i in range(n):
  for j in range(i + 1, n):
    if s[i] == s[j]:
      ans = False

print("Yes" if ans else "No")