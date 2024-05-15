import math

a, b = map(int, input().split())
ans = a * b // math.gcd(a, b)

print("Large" if ans > 1e18 else ans)