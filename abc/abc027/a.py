# https://atcoder.jp/contests/abc027/submissions/38180624

l = sorted(list(map(int, input().split())))
print(l[2] if l[0] == l[1] else l[0])
