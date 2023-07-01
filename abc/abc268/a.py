# https://atcoder.jp/contests/abc268/submissions/34760566

x = list(map(int, input().split()))
x.sort()
ans = 5;
if x[0] == x[1]: ans -= 1
if x[2] == x[1]: ans -= 1
if x[2] == x[3]: ans -= 1
if x[3] == x[4]: ans -= 1
print(ans)
