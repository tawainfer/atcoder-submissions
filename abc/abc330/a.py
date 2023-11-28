# https://atcoder.jp/contests/abc330/submissions/48004199

n, l = map(int, input().split())
a = list(map(int, input().split()))

ans = 0
for x in a:
  if x >= l:
    ans += 1

print(ans)
