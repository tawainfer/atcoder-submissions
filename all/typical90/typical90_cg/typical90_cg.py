k = int(input())
d = list()

for i in range(1, 10000009):
  if i * i > k:
    break

  if k % i == 0:
    d.append(i)
    
    if i * i != k:
      d.append(k // i)

div = sorted(d)
ans = 0

for i in range(len(div)):
  for j in range(i, len(div)):
    if k % (div[i] * div[j]) != 0: continue
    if (k // (div[i] * div[j])) < div[j]: break
    ans += 1

print(ans)