n, x = map(int, input().split())
s = list(map(int, input().split()))

sum = 0
for z in s:
  if z <= x:
    sum += z

print(sum)