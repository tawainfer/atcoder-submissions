n = int(input())
nap = False

s = []
t = []

for i in range(n):
  z = list(input().split())
  s.append(z[0])
  t.append(int(z[1]))

x = input()

ans = 0
for i in range(n):
  if nap:
    ans += int(t[i])

  if s[i] == x:
    nap = True

print(ans)