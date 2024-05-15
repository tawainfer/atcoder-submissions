n = int(input())
a = list(map(int, input().split()))

mi = 2e9
sum = 0
cnt = 0

for x in a:
  mi = min(mi, abs(x))
  sum += abs(x)
  if x < 0: cnt += 1

print(sum - (mi * 2 if cnt % 2 else 0))