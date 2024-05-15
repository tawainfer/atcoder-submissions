n = int(input())
s = []
t = []

for _ in range(n):
  a, b = list(input().split())
  s.append(a)
  t.append(b)

ans = False
for i in range(n):
  for j in range(i + 1, n):
    if s[i] == s[j] and t[i] == t[j]:
      ans = True

print("Yes" if ans else "No")