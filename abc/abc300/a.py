# https://atcoder.jp/contests/abc300/submissions/41043278

n, a, b = map(int, input().split())
c = list(map(int, input().split()))

for i in range(n):
  if c[i] == a + b:
    print(i + 1)
    exit()
