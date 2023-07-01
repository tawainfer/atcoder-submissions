# https://atcoder.jp/contests/abc292/submissions/39444927

n, q = map(int, input().split())
cnt = [0] * (n + 1)
out = [False] * (n + 1)

for _ in range(q):
  t, x = map(int, input().split())
  
  if t == 1:
    cnt[x] += 1
    
    if cnt[x] >= 2:
      out[x] = True

  if t == 2:
    out[x] = True

  if t == 3:
    print("Yes" if out[x] else "No")

