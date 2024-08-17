s = input()
for i in range(3):
  if s[-1] != '0':
    break
  s = s[:len(s) - 1]

if s[-1] == '.':
  s = s[:len(s) - 1]
print(s)