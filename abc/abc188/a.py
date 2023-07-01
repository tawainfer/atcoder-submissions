# https://atcoder.jp/contests/abc188/submissions/34699989

x, y = map(int, input().split())
if x > y: x, y = y, x
print("Yes" if x + 3 > y else "No")
