# https://atcoder.jp/contests/abc212/submissions/40378606

s = input()

if int(s) % 1111 == 0:
  print('Weak')
  exit()

for i in range(3):
  if ((int(s[i]) + 1) % 10) != int(s[i + 1]): break
  if i == 2:
    print('Weak')
    exit()

print('Strong')
