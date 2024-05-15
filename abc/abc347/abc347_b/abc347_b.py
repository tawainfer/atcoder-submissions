s = input()
n = len(s)

se = set()
for i in range(n):
  for j in range(i, n):
    se.add(s[i:j + 1])

print(len(se))