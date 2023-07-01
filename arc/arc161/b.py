# https://atcoder.jp/contests/arc161/submissions/41888239

t = int(input())

for _ in range(t):
  n = int(input())
  s = bin(n)[2:]

  if s.count('1') == 3:
    print(n)
    continue

  if n < 7:
    print(-1)
    continue

  if n == 7:
    print(7)
    continue

  if s.count('1') > 3:
    cnt = 0
    check = 0

    for i in range(len(s)):
      if s[i] == '1':
        cnt += 1

      if cnt == 3:
        check = i + 1
        break

    ls = len(s)
    s = s[:check] + ('0' * (ls - check))
    print(int(s, 2))
    continue

  if s.count('1') == 1:
    if len(s) <= 3:
      print(-1)
      continue

    ls = len(s)
    s = '1' * 3 + ('0' * (ls - 4))
    print(int(s, 2))
  else:
    f2 = s.find('1', 1)
    
    if len(s) - f2 <= 2:
      if len(s) <= 3:
        print(-1)
        continue

      ls = len(s)
      s = ('1' * 3) + ('0' * (ls - 4))
      print(int(s, 2))
    else:
      ls = len(s)
      s = s[:f2] + '011' + ('0' * (ls - f2 - 3))
      print(int(s, 2))

