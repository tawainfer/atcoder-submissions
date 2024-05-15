n, q = map(int, input().split())
t = list(map(int, input().split()))

s = set()
for i in range(1, n + 1):
  s.add(i)

for i in range(q):
  if t[i] in s:
    s.remove(t[i])
  else:
    s.add(t[i])

print(len(s))