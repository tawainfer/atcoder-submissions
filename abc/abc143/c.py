# https://atcoder.jp/contests/abc143/submissions/40378788

n = int(input())
s = input()

ans = 1
for i in range(1, n):
  if s[i] != s[i - 1]:
    ans += 1

print(ans)
