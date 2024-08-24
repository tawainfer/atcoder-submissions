n, k = map(int, input().split())
a = list(map(int, input().split()))

# print(a[n - k:])
# print(a[:n - k])
b = a[n - k:]
a = a[:n - k]
print(*b, *a)