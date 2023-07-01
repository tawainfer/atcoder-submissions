# https://atcoder.jp/contests/abc289/submissions/38830397

n, m = map(int, input().split())

ptn = []
for _ in range(m):
  c = int(input())
  a = set(map(int, input().split()))
  ptn.append(a)

ans = 0
for bit in range(1 << m):
  find = [False for _ in range(n)]

  for i in range(m):
    if bit & (1 << i):
      for j in range(n):
        if (j + 1) in ptn[i]:
          find[j] = True

  check = True
  for b in find:
    if not b:
      check = False

  if check:
    ans += 1

print(ans)
