# https://atcoder.jp/contests/abc311/submissions/43890984

n, d = map(int, input().split())
s = [input() for _ in range(n)]

check = [True] * d
for i in range(n):
  for j in range(d):
    if s[i][j] == 'x':
      check[j] = False

ans = 0
cnt = 0
check.append(False)

for b in check:
  if b:
    cnt += 1
  else:
    ans = max(ans, cnt)
    cnt = 0

print(ans)
