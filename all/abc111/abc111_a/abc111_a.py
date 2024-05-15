s = input()
i = 0
while i < len(s):
  print('9' if s[i] == '1' else '1', end = "")
  i += 1