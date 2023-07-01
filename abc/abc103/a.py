# https://atcoder.jp/contests/abc103/submissions/37247993

a, b, c = map(int, input().split())
a, b, c = sorted([a, b, c])
print(abs(a - b) + abs(b - c))
