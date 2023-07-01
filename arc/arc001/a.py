# https://atcoder.jp/contests/arc001/submissions/39524838

n = int(input())
s = input()

ma = 0
mi = 100
for i in range(1, 5):
  ma = max(ma, s.count(str(i)))
  mi = min(mi, s.count(str(i)))

print(ma, mi)
