n = input()
x = list(map(int, input().split()))
i = 0
ans = 0
while i < len(x):
  ans += x[i]
  i += 1
print(ans)