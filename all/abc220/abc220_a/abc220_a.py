a, b, c = map(int, input().split())
print(b // c * c if b // c - (a - 1) // c > 0 else -1)