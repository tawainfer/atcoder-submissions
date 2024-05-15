import bisect
n = int(input())

def eratos(n):
  pr = [True] * (n + 1)
  p = 2
  while p * p <= n:
    if pr[p]:
      for i in range(p * 2, n + 1, p):
        pr[i] = False
    p += 1
  return [p for p in range(2, n + 1) if pr[p]]

ps = eratos(int(n ** 0.5))
ss = set(ps)

def getpr(a):
  return ps[bisect.bisect_right(ps, a):]

ans = 0
l = len(ps)

for i in range(l):
  if ps[i] ** 5 > n: break

  for j in range(i + 1, l):
    if (ps[i] ** 2) * (ps[j] ** 3) > n: break
    
    for k in range(j + 1, l):
      if (ps[i] ** 2) * ps[j] * (ps[k] ** 2) > n: break
      else: ans += 1

print(ans)
