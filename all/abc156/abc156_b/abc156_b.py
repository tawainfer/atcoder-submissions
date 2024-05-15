n, k = map(int, input().split())
s = ""

while n > 0:
  s += str(n % k)
  n //= k

print(len(s))