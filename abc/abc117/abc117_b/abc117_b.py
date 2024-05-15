n = int(input())
l = sorted(list(map(int, input().split())))

if (sum(l) - l[-1]) > l[-1]:
  print("Yes")
else:
  print("No")