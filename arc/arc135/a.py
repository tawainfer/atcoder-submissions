# https://atcoder.jp/contests/arc135/submissions/38997522

mod = 998244353
memo = {}

def f(x):
  if x not in memo:
    if x > 4: memo[x] = f(x // 2) * f((x + 1) // 2) % mod
    else: memo[x] = x % mod
  
  return memo[x]

x = int(input())
print(f(x))
