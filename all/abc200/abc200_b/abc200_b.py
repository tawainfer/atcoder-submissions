n, k = map(int, input().split())

while k > 0:
  k -= 1
  if n % 200 == 0:
    n //= 200
  else:
    n = int(str(n) + "200")

print(n)