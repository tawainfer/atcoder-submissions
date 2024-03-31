# https://atcoder.jp/contests/abc347/submissions/51798840

n, k = map(int, input().split())
a = list(map(int, input().split()))

for x in a:
  if x % k == 0:
    print(x // k, end = ' ')
