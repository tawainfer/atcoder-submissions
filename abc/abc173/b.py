# https://atcoder.jp/contests/abc173/submissions/37555610

n = int(input())
ans = [0, 0, 0, 0]
ptn = ["AC", "WA", "TLE", "RE"]

while n:
  n -= 1
  s = input()
  if s == "AC":
    ans[0] += 1
  elif s == "WA":
    ans[1] += 1
  elif s == "RE":
    ans[3] += 1
  else:
    ans[2] += 1

for i in range(4):
  print(ptn[i], 'x', ans[i])
