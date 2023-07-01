# https://atcoder.jp/contests/abc134/submissions/38090710

import math

n, d = map(int, input().split())
r = 2 * d + 1

print(math.ceil(n / r))
