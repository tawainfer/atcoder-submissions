# https://atcoder.jp/contests/abc301/submissions/41402046

n = int(input())
a = list(map(int, input().split()))

while 1:
  for i in range(len(a) - 1):
    if a[i] - a[i + 1] < -1:
      a = a[:i + 1] + list(range(a[i] + 1, a[i + 1])) + a[i + 1:]
      break

    if a[i] - a[i + 1] > 1:
      a = a[:i + 1] + list(range(a[i] - 1, a[i + 1], -1)) + a[i + 1:]
      break

    if i == len(a) - 2:
      print(*a)
      exit()

