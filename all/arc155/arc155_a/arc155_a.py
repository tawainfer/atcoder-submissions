t = int(input())

for _ in range(t):
  n, k = map(int, input().split())
  k %= (2 * n)
  s = input()
  rs = s[::-1]

  x = rs[:k >> 1] + rs[n - ((k + 1) >> 1):]
  a, b = s + x, x + s

  if a == a[::-1] and b == b[::-1]:
    print("Yes")
  else:
    print("No")