n, k = map(int, input().split())
s = []
for i in range(k):
  s.append(input())

s = sorted(s)
for i in range(k):
  print(s[i])