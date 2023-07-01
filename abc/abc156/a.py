# https://atcoder.jp/contests/abc156/submissions/34699958

n, r = map(int, input().split())
print(r if n > 9 else 100 * (10 - n) + r)
