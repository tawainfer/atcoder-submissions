n, m, b = map(int, input().split())
a = list(map(int, input().split()))
c = list(map(int, input().split()))

cs = sum(c) + b * len(c)
ans = 0

for x in a:
  ans += x * len(c) + cs

print(ans)