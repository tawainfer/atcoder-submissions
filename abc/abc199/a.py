# https://atcoder.jp/contests/abc199/submissions/34663252

a, b, c = map(int, input().split())
print("Yes" if a * a + b * b < c * c else "No")
