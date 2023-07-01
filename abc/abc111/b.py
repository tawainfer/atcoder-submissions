# https://atcoder.jp/contests/abc111/submissions/40377910

n = int(input())
x = 111

while 1:
  if x >= n:
    print(x)
    exit()

  x += 111
