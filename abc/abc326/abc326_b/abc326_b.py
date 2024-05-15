n = int(input())
for i in range(10):
  for j in range(10):
    for k in range(10):
      if i * j == k and 100 * i + 10 * j + k >= n:
        print(i, j, k, sep = '')
        exit()