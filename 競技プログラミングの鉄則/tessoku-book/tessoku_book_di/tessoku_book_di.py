n, k = map(int, input().split())
print("Yes" if k % 2 == input().count('1') % 2 else "No")