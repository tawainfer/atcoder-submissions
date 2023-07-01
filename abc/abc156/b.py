# https://atcoder.jp/contests/abc156/submissions/38035984

n, k = map(int, input().split())
s = ""

while n > 0:
  s += str(n % k)
  n //= k

print(len(s))
