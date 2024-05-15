t = int(input())

for _ in range(t):
  n = int(input())
  a = list(map(int, input().split()))
  
  cnt = 0
  for x in a:
    if x % 2 == 1:
      cnt += 1

  print(cnt)