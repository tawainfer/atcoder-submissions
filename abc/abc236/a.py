# https://atcoder.jp/contests/abc236/submissions/34672637

s = list(input())
a, b = map(int, input().split())
c = s[a - 1]
s[a - 1] = s[b - 1]
s[b - 1] = c
print("".join(s))
