# https://atcoder.jp/contests/abc147/submissions/34707962

a, b, c = map(int, input().split())
print("bust" if (a + b + c) > 21 else "win")
