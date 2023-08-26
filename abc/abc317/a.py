# https://atcoder.jp/contests/abc317/submissions/44972472

n, h, x = map(int, input().split())
p = list(map(int, input().split()))

for i in range(n):
  if h + p[i] >= x:
    print(i + 1)
    exit()
