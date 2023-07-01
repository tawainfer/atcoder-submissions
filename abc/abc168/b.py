# https://atcoder.jp/contests/abc168/submissions/37555293

k = int(input())
s = input()

if len(s) > k:
  print(s[:k] + "...")
else:
  print(s)
