s = list(input())
for i in range(0, len(s) // 2):
  t = s[2 * i - 2]
  s[2 * i - 2] = s[2 * i - 1]
  s[2 * i - 1] = t

for c in s:
  print(c, end = '')