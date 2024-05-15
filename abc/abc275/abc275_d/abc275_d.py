def f(x, m):
  if x == 0:
    return 1
  
  if m.get(x):
    return m[x]
  
  m[x] = f(x // 2, m) + f(x // 3, m)
  return m[x]

n = int(input())
m = {}
print(f(n, m))