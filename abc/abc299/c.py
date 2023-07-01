# https://atcoder.jp/contests/abc299/submissions/41493436

n = int(input())
s = input()

start = -1
for i in range(n):
  if s[i] == 'o':
    start = i
    break

if start == -1:
  print(-1)
  exit(0)
st = start

cnt = 0
ans = 0

for i in range(st, n):
  if s[i] == 'o':
    cnt += 1
  else:
    if i - 1 >= 0 and s[i - 1] == '-':
      start += 1
      continue
    end = i
    if (start - 1 >= 0 and s[start - 1] == '-') or (s[end] == '-'):
      ans = max(ans, cnt)
    cnt = 0
    start = end + 1

if cnt > 0:
  if start - 1 >= 0 and s[start - 1] == '-':
    ans = max(ans, cnt)

if ans > 0:
  print(ans)
else:
  print(-1)

