# https://atcoder.jp/contests/arc175/submissions/51768948

n = int(input())
p = list(map(int, input().split()))
s = input()
mod = 998244353

for i in range(len(p)):
  p[i] -= 1

ans = 0

cnt = 1
t = list('?' * n)
for i in p:
  if t[i] == '?':
    if s[i] == 'R':
      cnt = 0
      break
  else:
    if s[i] == '?':
      cnt *= 2
      cnt %= mod
  t[(i - 1) % n] = 'L'
ans += cnt

cnt = 1
t = list('?' * n)
for i in p:
  if t[(i - 1) % n] == '?':
    if s[i] == 'L':
      cnt = 0
      break
  else:
    if s[i] == '?':
      cnt *= 2
      cnt %= mod
  t[i] = 'R'
ans += cnt

ans %= mod
print(ans)
