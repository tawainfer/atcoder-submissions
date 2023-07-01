# https://atcoder.jp/contests/abc261/submissions/35953647

r = []
b = []
l1, r1, l2, r2 = map(int, input().split())
cnt = 0
for i in range(101):
  r.append(False)
  b.append(False)
  if l1 <= i <= r1: r[i] = True
  if l2 <= i <= r2: b[i] = True
  if r[i] and b[i]: cnt += 1
print(max(0, cnt - 1))
