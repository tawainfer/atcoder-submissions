# https://atcoder.jp/contests/abc078/submissions/40378743

x, y, z = map(int, input().split())
print(x // (y + z) - 1 if x - x // (y + z) * (y + z) < z else x // (y + z))
