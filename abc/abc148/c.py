# https://atcoder.jp/contests/abc148/submissions/40378488

import math
a, b = map(int, input().split())
print(a * b // math.gcd(a, b))
