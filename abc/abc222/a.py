# https://atcoder.jp/contests/abc222/submissions/34663171

x = list(input())
s = 4 - len(x)
print('0' * s, end = "")
for i in x: print(i, end = "")
