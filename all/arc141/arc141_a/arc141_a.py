t = int(input())

for _ in range(t):
  ans = 0
  s = input()
  n = int(s)

  for i in range(2, len(s) + 1):
    if len(s) % i == 0:
      d = len(s) // i
      t = s[:d] * i
      
      if t <= s:
        ans = max(ans, int(t))
        # print(i, ans)
        continue

      t = str(int(s[:d]) - 1) * i
      ans = max(ans, int(t))
      # print(i, ans)
      continue

  if s[0] * len(s) <= s:
    ans = max(ans, int(s[0] * len(s)))
  else:
    x = int(s[0]) - 1
    if x != 0:
      ans = max(ans, int(str(x) * len(s)))
    else:
      ans = max(ans, int('9' * (len(s) - 1)))

  print(ans)