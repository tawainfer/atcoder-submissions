# https://atcoder.jp/contests/abc227/submissions/34773030

n, k, a = map(int, input().split())
ans = (a + k - 1) % n
if not ans: ans = n
print(ans)
