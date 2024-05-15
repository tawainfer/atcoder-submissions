a, b = map(int, input().split())

ans = 0
while(a !=  b):
  if a > b:
    ans += a // b
    a %= b
  else:
    ans += b // a
    b %= a

  if a == 0 or b == 0:
    print(ans - 1)
    exit()

print(ans)