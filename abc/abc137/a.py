# https://atcoder.jp/contests/abc137/submissions/34772531

a, b = map(int, input().split())
ans = max(a + b, max(a - b, a * b))
print(ans)
