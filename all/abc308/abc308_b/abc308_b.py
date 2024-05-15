n, m = map(int, input().split())
c = input().split()
d = input().split()
p = list(map(int, input().split()))

dish_price = dict()
for i in range(m):
  dish_price[d[i]] = p[i + 1]

ans = 0
for s in c:
  if s in dish_price:
    ans += dish_price[s]
  else:
    ans += p[0]

print(ans)