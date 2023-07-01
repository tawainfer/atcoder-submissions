# https://atcoder.jp/contests/abc071/submissions/34902929

x, a, b = map(int, input().split())
print('A' if (abs(a - x) == min(abs(a - x), abs(x - b))) else 'B')
