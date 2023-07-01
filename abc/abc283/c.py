# https://atcoder.jp/contests/abc283/submissions/37516922

s = input()
n = len(s)

ans = 0
skip = False

for i in range(n):
  if skip:
    skip = False
    continue

  ans += 1
  if (i != n - 1) and (s[i] == '0') and (s[i + 1] == '0'):
    i += 1
    skip = True

print(ans)
