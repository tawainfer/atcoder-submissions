n, a, b = map(int, input().split())
c = list(map(int, input().split()))

for i in range(n):
  if c[i] == a + b:
    print(i + 1)
    exit()