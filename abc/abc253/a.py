# https://atcoder.jp/contests/abc253/submissions/34714064

x = list(map(int, input().split()))
n = x[1]
x.sort();
if x[0] == x[1] == x[2]: print("Yes")
elif x[1] == n: print("Yes")
else: print("No")
