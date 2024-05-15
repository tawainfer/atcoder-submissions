n, q = map(int, input().split())
a = list(map(int, input().split()))

b = [0]
for x in a:
  b.append(b[-1] + x)

for _ in range(q):
  l, r = map(int, input().split())
  print(b[r] - b[l - 1])