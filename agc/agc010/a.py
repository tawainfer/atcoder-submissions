# https://atcoder.jp/contests/agc010/submissions/37371757

n = int(input())
a = list(map(int, input().split()))

odd = 0
even = 0
for i in a:
  if i % 2:
    odd += 1
  else:
    even += 1

even += odd // 2
odd %= 2

if odd == 0 or (odd == 1 and even == 0):
  print("YES")
else:
  print("NO")
