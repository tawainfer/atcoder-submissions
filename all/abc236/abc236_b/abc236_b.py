n = int(input())
a = list(map(int, input().split()))

cnt = []
for _ in range(n):
  cnt.append(0)

for x in a:
  cnt[x - 1] += 1

for i in range(n):
  if cnt[i] != 4:
    print(i + 1)