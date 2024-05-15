
b1 = False
b2 = False
b4 = False

a = list(map(int, input().split()))

for i in range(2):
  if(a[i] == 1): b1 = True
  if(a[i] == 2): b2 = True
  if(a[i] == 3):
    b1 = True
    b2 = True
  if(a[i] == 4): b4 = True
  if(a[i] == 5):
    b1 = True
    b4 = True
  if(a[i] == 6):
    b2 = True
    b4 = True
  if(a[i] == 7):
    b1 = True
    b2 = True
    b4 = True

ans = 0
if(b1): ans += 1
if(b2): ans += 2
if(b4): ans += 4

print(ans)