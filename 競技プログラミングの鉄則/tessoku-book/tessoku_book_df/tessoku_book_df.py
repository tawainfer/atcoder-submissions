n, h, w = map(int, input().split())

xor = 0
for _ in range(n):
  a, b = map(int, input().split())
  xor ^= (a - 1)
  xor ^= (b - 1)

print('First' if xor != 0 else 'Second')
