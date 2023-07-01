# https://atcoder.jp/contests/abc290/submissions/39055821

n, m = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

ans = 0
for x in b:
  ans += a[x - 1]

print(ans)
