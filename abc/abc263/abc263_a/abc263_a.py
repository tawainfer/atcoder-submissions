a, b, c, d, e = map(int, input().split())
a, b, c, d, e = sorted([a, b, c, d, e])
if a == b == c != d == e or e == d == c != b == a: print("Yes")
else: print("No")