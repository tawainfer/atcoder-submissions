# https://atcoder.jp/contests/abc060/submissions/35806291

s, t, u = input().split()
if s[len(s) - 1] == t[0] and t[len(t) - 1] == u[0]: print("YES")
else: print("NO")
