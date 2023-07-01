# https://atcoder.jp/contests/arc122/submissions/41923624

def cost(a, x):
  res = 0
  for i in range(len(a)):
    res += x + a[i] - min(a[i], 2 * x)
  
  res /= len(a)
  return res

n = int(input())
a = list(map(int, input().split()))

l = 0
r = 1e18

while r - l > 1e-6:
  c1 = l + (r - l) / 3
  c2 = r - (r - l) / 3
  if cost(a, c1) < cost(a, c2): r = c2
  else: l = c1

print(cost(a, l))
