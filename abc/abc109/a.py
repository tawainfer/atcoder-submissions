# https://atcoder.jp/contests/abc109/submissions/34773493

a, b = map(int, input().split())
print("YNeos"[not(a * b % 2)::2])
