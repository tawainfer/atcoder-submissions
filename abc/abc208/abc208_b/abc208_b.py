p = int(input())
pow = [1]
for i in range(1, 11):
  pow.append(pow[-1] * i)

ans = 0
while p > 0:
  for i in range(10, 0, -1):
    if p >= pow[i]:
      p -= pow[i]
      ans += 1
      break

print(ans)