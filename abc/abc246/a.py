# https://atcoder.jp/contests/abc246/submissions/34901675

x1, y1 = map(int, input().split())
x2, y2 = map(int, input().split())
x3, y3 = map(int, input().split())
x1, x2, x3  = sorted([x1, x2, x3])
y1, y2, y3  = sorted([y1, y2, y3])
print(x3 if x1 == x2 else x1, y3 if y1 == y2 else y1)
