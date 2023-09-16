# https://atcoder.jp/contests/abc320/submissions/45584000

a, b = map(int, input().split())
ans = 1
base = 1
for i in range(b):
  base *= a
ans = base
base = 1
for i in range(a):
  base *= b
ans += base
print(ans)
