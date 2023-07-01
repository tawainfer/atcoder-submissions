# https://atcoder.jp/contests/abc245/submissions/34774058

a, b, c, d = map(int, input().split())
if a < c: print("Takahashi")
elif a == c:
  if b <= d: print("Takahashi")
  else: print("Aoki")
else: print("Aoki")
