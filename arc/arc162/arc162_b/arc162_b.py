n = int(input())
p = list(map(int, input().split()))


rev_cnt = 0
for i in range(n):
  for j in range(i + 1, n):
    if p[i] > p[j]:
      rev_cnt += 1

if rev_cnt % 2 != 0:
  print('No')
  exit()
print('Yes')

ans = []
INF = 1e9

tmp = 0
while 1:
  target = INF
  pos = -1
  
  # debug
  # tmp += 1
  # if tmp > 10:
  #   break

  for i in range(n):
    if p[i] != i + 1:
      if p[i] < target:
        target = p[i]
        pos = i
        # break

  if target == INF:
    break

  if pos < n - 1:
    r = [p[pos], p[pos + 1]]
    q = []
    for i in range(n):
      if i != pos and i != (pos + 1):
        q.append(p[i])

    cnt = 0
    for i in range(len(q)):
      if p[i] == i + 1:
        cnt += 1
      else:
        break

    ans.append((pos + 1, cnt))
    p = q[:cnt] + r + q[cnt:]
    # ans.append((pos + 1, target - 1))
    # p = p[:target - 1] + p[pos:pos + 2] + p[target - 1:pos] + p[pos + 2:]
  else:
    ans.append((n - 1, n - 3))
    q = []
    for i in range(n - 3):
      q.append(p[i])
    q.append(p[-2])
    q.append(p[-1])
    q.append(p[-3])
    p = q
  
  # print(p)

print(len(ans))
for p in ans:
  print(p[0], p[1])
