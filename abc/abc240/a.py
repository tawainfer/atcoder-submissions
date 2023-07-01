# https://atcoder.jp/contests/abc240/submissions/34672562

x = list(map(int, input().split()))
x.sort()
print("Yes" if (x[0] < 2 and x[1] > 9) or x[1] - x[0] == 1 else "No")
