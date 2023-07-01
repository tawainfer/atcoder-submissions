# https://atcoder.jp/contests/abc126/submissions/34670463

n, k = map(int, input().split())
s = input()
k -= 1
s = s[:k] + s[k].lower() + s[k + 1:]
print(s)
