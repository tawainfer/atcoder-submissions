# https://atcoder.jp/contests/abc155/submissions/34713121

x = list(map(int, input().split()))
x.sort()
print("Yes" if x[0] == x[1] != x[2] or x[0] != x[1] == x[2] else "No")
