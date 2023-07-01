# https://atcoder.jp/contests/arc001/submissions/39524987

a, b = map(int, input().split())
d = abs(a - b)

ans = 0
while d >= 10:
  ans += 1
  d -= 10

if d in {1, 5}: ans += 1
elif d in {2, 4, 6, 9}: ans += 2
elif d in {3, 7, 8}: ans += 3
print(ans)
