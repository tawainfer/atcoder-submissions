# https://atcoder.jp/contests/abc204/submissions/37371893

n = int(input())
a = map(int, input().split())

ans = 0
for x in a:
  if x > 10:
    ans += x - 10

print(ans)
