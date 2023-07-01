# https://atcoder.jp/contests/abc257/submissions/34773564

n, x = map(int, input().split())
ans = ""
alp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
cnt = 0
while cnt < 26:
  ans += alp[cnt] * n
  cnt += 1
print(ans[x - 1])
