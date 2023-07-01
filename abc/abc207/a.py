# https://atcoder.jp/contests/abc207/submissions/34672120

a, b, c = map(int, input().split())
print(a + b + c - min(a, min(b, c)))

