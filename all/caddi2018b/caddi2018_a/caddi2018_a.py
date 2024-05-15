n, p = map(int, input().split())
prime = dict()

if n == 1:
  print(p)
  exit()

i = 2
x = p

while i * i <= p and x > 0:
  while x > 0 and x % i == 0:
    if i in prime: prime[i] += 1
    else: prime[i] = 1
    x //= i
    if i * i != p and x > 0 and x % (p // i) == 0:
      if p // i in prime: prime[p // i] += 1
      else: prime[p // i] = 1
  i += 1

if x == p:
  prime[p] = 1

ans = -1
for k in prime:
  if ans == -1:
    ans = pow(k, prime[k] // n)
  else:
    ans *= pow(k, prime[k] // n)

print(ans)