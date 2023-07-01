# https://atcoder.jp/contests/abc176/submissions/38128758

s = list(input())

ans = 0
for c in s:
  x = ord(c) - 48
  ans += x
  # print(x, ans)

print("Yes" if ans % 9 == 0 else "No")
