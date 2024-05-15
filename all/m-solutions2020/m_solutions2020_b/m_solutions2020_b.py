a, b, c = map(int, input().split())
k = int(input())

for bit in range((1 << k)):
  x, y, z = a, b, c
  for i in range(k):
    if bit & (1 << i): y *= 2
    else: z *= 2

  if x < y < z:
    print('Yes')
    exit()

print('No')
