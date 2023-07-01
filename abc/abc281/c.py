# https://atcoder.jp/contests/abc281/submissions/37247818

n, t = map(int, input().split())
a = list(map(int, input().split()))

b = []
b.append(0)
for i in range(n):
  if i == 0:
    b.append(a[i])
  else:
    b.append(b[-1] + a[i])

t %= b[-1]
ok = -1
ng = n
while abs(ng - ok) > 1:
  mid = (ok + ng) // 2
  if b[mid] <= t: ok = mid
  else: ng = mid

print(ng, t - b[ok])
