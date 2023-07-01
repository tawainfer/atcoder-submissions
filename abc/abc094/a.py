# https://atcoder.jp/contests/abc094/submissions/35456670

a, b, x = map(int, input().split())
s = a + b

if x < a or s < x: print("NO")
else: print("YES")
