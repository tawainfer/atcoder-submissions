# https://atcoder.jp/contests/abc326/submissions/47098980

x, y = map(int, input().split())
for i in range(x - 3, x + 3):
  if i == y:
    print('Yes')
    exit()
  
print('No')
