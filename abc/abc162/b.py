# https://atcoder.jp/contests/abc162/submissions/38034971

n = int(input())
ans = 0
for i in range(1, n + 1):
  if i % 3 and i % 5:
    ans += i

print(ans)
