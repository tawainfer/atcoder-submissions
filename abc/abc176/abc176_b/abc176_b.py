s = list(input())

ans = 0
for c in s:
  x = ord(c) - 48
  ans += x
  # print(x, ans)

print("Yes" if ans % 9 == 0 else "No")