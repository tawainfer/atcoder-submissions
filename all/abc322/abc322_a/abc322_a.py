import sys

n = int(input())
s = input()

for i in range(2, n):
  if s[i-2:i+1] == 'ABC':
    print(i - 1)
    sys.exit()
    
print(-1)