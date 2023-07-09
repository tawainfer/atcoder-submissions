# https://atcoder.jp/contests/abc309/submissions/43411347

a, b = map(int, input().split())
print('Yes' if a % 3 != 0 and a + 1 == b else 'No')
