n, k = map(int, input().split())
a = list(map(int, input().split()))

cnt = []
for i in range(300009):
  cnt.append(0)

for x in a:
  cnt[x] += 1

sum = 0
while k:
  k -= 1

  for i in range(300009):
    if cnt[i] > 0:
      cnt[i] -= 1
    else:
      sum += i
      break

print(sum)