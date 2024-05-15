n = int(input())
abc = [list(map(int, input().split())) for _ in range(3)]
mod = [[0] * 46 for _ in range(3)]

for i in range(3):
  for j in range(n):
    mod[i][abc[i][j] % 46] += 1

ans = 0
for i in range(46):
  for j in range(46):
    for k in range(46):
      if (i + j + k) % 46 == 0:
        ans += mod[0][i] * mod[1][j] * mod[2][k]

print(ans)