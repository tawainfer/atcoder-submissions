# https://atcoder.jp/contests/abc310/submissions/43654752

n, p, q = map(int, input().split())
d = sorted(list(map(int, input().split())))
print(min(p, q + d[0]))
