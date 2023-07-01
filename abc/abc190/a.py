# https://atcoder.jp/contests/abc190/submissions/34713097

a, b, c = map(int, input().split())
if c: print("Aoki" if a < b else "Takahashi")
else: print("Takahashi" if a > b else "Aoki") 

