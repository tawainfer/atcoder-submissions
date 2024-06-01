n, l, r = map(int, input().split())
a = list()
for i in range(n):
  a.append(i + 1)

print(*(a[:l-1] + a[l-1:r][::-1] + a[r:]))