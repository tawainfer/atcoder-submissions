n = int(input())
cnt = 0

for _ in range(n):
  s = input()
  if s == "For":
    cnt += 1

if cnt > n / 2:
  print("Yes")
else:
  print("No")