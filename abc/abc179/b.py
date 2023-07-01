# https://atcoder.jp/contests/abc179/submissions/37705104

n = int(input())
ans = False
cnt = 0

for _ in range(n):
  a, b = map(int, input().split())
  if a == b:
    cnt += 1
  else:
    cnt = 0

  if cnt >= 3:
    ans = True

print("Yes" if ans else "No")

