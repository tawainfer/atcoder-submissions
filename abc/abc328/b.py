# https://atcoder.jp/contests/abc328/submissions/47518533

n = int(input())
d = list(map(int, input().split()))

ans = 0
for i in range(1, n + 1):
  for j in range(1, d[i - 1] + 1):
    s = str(i) + str(j)
    se = set()

    for c in s:
      se.add(c)

    if len(se) == 1:
      ans += 1

print(ans)

