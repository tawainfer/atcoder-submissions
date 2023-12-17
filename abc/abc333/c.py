# https://atcoder.jp/contests/abc333/submissions/48557332

def f(n):
  res = ''
  for i in range(n):
    res += '1'
  return int(res)

n = int(input())
se = set()

for i in range(1, 18):
  for j in range(1, 18):
    for k in range(1, 18):
      se.add(f(i) + f(j) + f(k))
      # pass

l = list()
for x in se:
  l.append(x)
l.sort()
# print(l)

print(l[n - 1])
