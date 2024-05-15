t = int(input())

for _ in range(t):
  n = int(input())
  s = input()

  ptn = []
  u = s[0]

  check = False
  for i in range(1, n):
    if s[0] < s[i]:
      check = True
    elif s[0] == s[i] and s[:i] < s[i:]:
      check = True

  if check:
    print('Yes')
    # continue
  else:
    print('No')

  