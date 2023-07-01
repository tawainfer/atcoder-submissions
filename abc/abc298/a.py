# https://atcoder.jp/contests/abc298/submissions/40703369

n = int(input())
s = input()

check = False
for c in s:
  if c == 'o': check = True
  if c == 'x':
    print('No')
    exit()

print('Yes' if check else 'No')
