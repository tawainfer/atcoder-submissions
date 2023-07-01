# https://atcoder.jp/contests/abc254/submissions/38035439

n = int(input())
a = []

for i in range(n):
  if a:
    a1 = a + [0]
    a2 = [0] + a
    a = [a1[j] + a2[j] for j in range(i + 1)]
  else:
    a = [1]
    
  print(*a)
