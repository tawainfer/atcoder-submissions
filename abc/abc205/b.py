# https://atcoder.jp/contests/abc205/submissions/37420707

n = int(input())
a = sorted(list(map(int, input().split())))

ans = True
for i in range(n):
  if a[i] != i + 1:
    ans = False

print("Yes" if ans else "No")
