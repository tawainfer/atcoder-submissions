# https://atcoder.jp/contests/abc329/submissions/47794259

n = int(input())
a = list(map(int, input().split()))
a.sort()
a.reverse()

for x in a:
  if x != max(a):
    print(x)
    break

