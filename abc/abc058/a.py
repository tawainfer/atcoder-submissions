# https://atcoder.jp/contests/abc058/submissions/35078861

a, b, c = map(int, input().split())
print("YES" if (b - a) == (c - b) else "NO")
