# https://atcoder.jp/contests/abc351/submissions/52833639

a = list(map(int, input().split()))
b = list(map(int, input().split()))

sa = sum(a)
sb = sum(b)

print(sum(a) - sum(b) + 1)
