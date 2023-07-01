# https://atcoder.jp/contests/abc098/submissions/34902881

a, b = map(int, input().split())
print(max(a + b, max(a - b, a * b)))
