t = int(input())

for _ in range(t):
  x = list(map(int, input().split()))
  
  if (x[0] + x[1] + x[2]) % 3 == 0 and x[0] % 2 == x[1] % 2 == x[2] % 2:
    a = (x[0] + x[1] + x[2]) // 3
    print((abs(x[0] - a) + abs(x[1] - a) + abs(x[2] - a)) // 4)
  else:
    print(-1)
