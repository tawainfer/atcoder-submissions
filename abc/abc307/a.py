# https://atcoder.jp/contests/abc307/submissions/42942091

n = int(input())
a = list(map(int, input().split()))

cnt = 0
sum = 0
for i in range(len(a)):
  cnt += 1
  sum += a[i]
  
  if cnt == 7:
    print(sum, end = ' ')
    sum = 0
    cnt = 0
