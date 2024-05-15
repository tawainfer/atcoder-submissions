n = int(input())
a, b = map(int, input().split())
c = d = True

for _ in range(n - 2):
  s = set(map(int, input().split()))
  if a not in s: c = False
  if b not in s: d = False

print('Yes' if c or d else 'No')