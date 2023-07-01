# https://atcoder.jp/contests/abc291/submissions/39285333

n = int(input())
s = input()

x = 0
y = 0
ptn = ['R', 'L', 'U', 'D']
move = [
  (1, 0),
  (-1, 0),
  (0, 1),
  (0, -1)
]
check = {(0, 0)}

for c in s:
  for i in range(4):
    if c == ptn[i]:
      xx, yy = move[i]
      xx += x
      yy += y
      
      if (xx, yy) in check:
        print('Yes')
        exit()
      
      check.add((xx, yy))
      x = xx
      y = yy
      
print('No')
