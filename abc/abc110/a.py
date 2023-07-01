# https://atcoder.jp/contests/abc110/submissions/34670587

l = list(map(int, input().split()))
l.sort()
print(l[2] * 10 + l[1] + l[0])

