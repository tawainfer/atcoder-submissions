# https://atcoder.jp/contests/abc115/submissions/38109848

n = int(input())
p = []
for _ in range(n):
  p.append(int(input()))
p = sorted(p)

print(sum(p) - p[-1] // 2)
