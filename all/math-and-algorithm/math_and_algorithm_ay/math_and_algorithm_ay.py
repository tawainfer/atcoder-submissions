n = int(input())

ans = 0;
if n % 4 == 1:
  ans = 2
elif n % 4 == 2:
  ans = 4
elif n % 4 == 3:
  ans = 8
else:
  ans = 6
  
print(ans);