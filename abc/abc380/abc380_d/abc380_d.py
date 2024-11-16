s = input()

q = int(input())
k = map(int, input().split())

b = [len(s)]
while b[-1] < 1e18:
  b.append(b[-1] * 2)

for x in k:
  inv = 0
  t = x - 1
  # print('t =', t, 'inv =', inv)
  for i in range(len(b) - 1, 0, -1):
    if t >= b[i]:
      continue
    if t >= b[i - 1]:
      inv += 1
      # print('inv!')
    # else:
      # print('no...')
    t %= b[i - 1]
    # t %= 2
    # print('t =', t, 'inv =', inv)
  # print()
  # print('result:', t)
  if inv % 2 == 0:
    print(s[t], end = ' ')
  else:
    if 'a' <= s[t] and s[t] <= 'z':
      print(chr(ord(s[t]) - 32), end = ' ')
    else:
      print(chr(ord(s[t]) + 32), end = ' ')