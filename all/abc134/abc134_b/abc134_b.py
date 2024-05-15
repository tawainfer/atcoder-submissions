import math

n, d = map(int, input().split())
r = 2 * d + 1

print(math.ceil(n / r))