n = int(input())
x = 1
cnt = 0

while 1:
  if x * 2 > n:
    print(cnt)
    exit()

  cnt += 1
  x *= 2