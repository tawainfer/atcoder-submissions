# https://atcoder.jp/contests/abc212/submissions/34670884

a, b = map(int, input().split())
print("Alloy" if 0 < a and b > 0 else "Gold" if b == 0 else "Silver")
