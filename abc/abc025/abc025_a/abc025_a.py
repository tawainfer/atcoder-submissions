import sys

s = input()
n = int(input())
cnt = 0

for i in range(5):
  for j in range(5):
    cnt += 1
    if n == cnt:
      print(s[i] + s[j])
      sys.exit()