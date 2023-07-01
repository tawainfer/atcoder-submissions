# https://atcoder.jp/contests/abc283/submissions/37515204

n = int(input())
a = list(map(int, input().split()))

q = int(input())
for _ in range(q):
  query = list(map(int, input().split()))
  query[1] -= 1

  if query[0] == 1:
    a[query[1]] = query[2]
  
  if query[0] == 2:
    print(a[query[1]])
