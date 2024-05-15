x = list(map(int, input().split()))
x.sort()
print("Yes" if x[2] - x[1] == x[1] - x[0] else "No")