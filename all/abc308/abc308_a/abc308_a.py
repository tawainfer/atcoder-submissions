s = list(map(int, input().split()))

for i in range(8):
  if not(100 <= s[i] <= 675) or s[i] % 25 != 0 or (i > 0 and s[i - 1] > s[i]):
    print('No')
    exit()

print('Yes')