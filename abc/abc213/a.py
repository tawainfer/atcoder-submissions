# https://atcoder.jp/contests/abc213/submissions/34902994

a, b = map(int, input().split())
c = 0
while c < 256:
  if a ^ c == b: print(c)
  c += 1
