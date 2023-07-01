# https://atcoder.jp/contests/abc233/submissions/34707187

x, y = map(int, input().split())
print((y - x + 9) // 10 if x < y else 0)
