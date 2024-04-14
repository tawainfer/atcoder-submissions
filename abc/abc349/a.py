# https://atcoder.jp/contests/abc349/submissions/52293326

n = int(input())
a = list(map(int, input().split()))

ans = 0
for x in a:
  ans += x

print(-ans)
