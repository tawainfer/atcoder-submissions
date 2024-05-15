a, b, c, k = map(int, input().split())

ans = 0
while k > 0:
  if a > 0:
    ans += min(k, a)
    k -= min(k, a)
    a = 0
  elif b > 0:
    k -= min(k, b)
    b = 0
  else:
    ans -= k
    k = 0

print(ans)