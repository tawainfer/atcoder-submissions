# https://atcoder.jp/contests/abc203/submissions/34672195

x = list(map(int, input().split()))
x.sort()
if x[0] == x[1]: print(x[2])
elif x[1] == x[2]: print(x[0])
else: print(0)
