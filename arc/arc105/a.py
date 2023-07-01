# https://atcoder.jp/contests/arc105/submissions/37687779

a = list(map(int, input().split()))
ans = False

for bit in range(2 ** 4):
  ok = 0
  ng = 0

  for i in range(4):
    if bit & (1 << i):
      ok += a[i]
    else:
      ng += a[i]

  if ok == ng:
    ans = True

print("Yes" if ans else "No")
