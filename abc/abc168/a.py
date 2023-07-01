# https://atcoder.jp/contests/abc168/submissions/34699883

n = int(input())
n %= 10
if n in {2, 4, 5, 7, 9}: print("hon")
elif n == 3: print("bon")
else: print("pon")
