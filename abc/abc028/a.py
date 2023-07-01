# https://atcoder.jp/contests/abc028/submissions/38180378

n = int(input())
if n < 60:
  print("Bad")
elif n < 90:
  print("Good")
elif n < 100:
  print("Great")
else:
  print("Perfect")
