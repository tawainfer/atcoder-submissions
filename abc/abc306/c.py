# https://atcoder.jp/contests/abc306/submissions/42509477

n = int(input())
a = list(map(int, input().split()))

cnt = [0] * (n + 1)
for x in a:
  cnt[x] += 1
  if cnt[x] == 2:
    print(x, end = ' ')
