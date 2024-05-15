n, a, b = map(int, input().split())
print(max(n - 5, 0) * a + min(n, 5) * b)