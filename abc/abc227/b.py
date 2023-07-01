# https://atcoder.jp/contests/abc227/submissions/37583968

n = int(input())
s = list(map(int, input().split()))

ans = 0
for x in s:
  flag = False
  for a in range(1, 500):
    for b in range(1, 500):
      if (4 * a * b + 3 * a + 3 * b) == x:
        flag = True

  if not flag:
    ans += 1

print(ans)
