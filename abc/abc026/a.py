# https://atcoder.jp/contests/abc026/submissions/38180660

a = int(input())
ans = 0

for i in range(1, 100):
  for j in range(1, 100):
    if i + j == a:
      ans = max(ans, i * j)

print(ans)
