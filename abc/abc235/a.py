# https://atcoder.jp/contests/abc235/submissions/34707366

x = list(input())
#print(x)
a = int(x[0]) * 100 + int(x[1]) * 10 + int(x[2])
b = int(x[1]) * 100 + int(x[2]) * 10 + int(x[0])
c = int(x[2]) * 100 + int(x[0]) * 10 + int(x[1])
print(a + b + c)
