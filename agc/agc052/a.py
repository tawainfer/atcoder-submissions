# https://atcoder.jp/contests/agc052/submissions/42066384

t = int(input())

for _ in range(t):
  n = int(input())
  for _ in range(3): input()
  print('1', '0' * n, '1' * n, sep = '')
