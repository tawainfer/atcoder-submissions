# https://atcoder.jp/contests/abc032/submissions/38180316

a = int(input())
b = int(input())
n = int(input())

for i in range(n, 1000000):
  if i % a == 0 and i % b == 0:
    print(i)
    break
