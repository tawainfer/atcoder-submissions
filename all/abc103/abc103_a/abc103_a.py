a, b, c = map(int, input().split())
a, b, c = sorted([a, b, c])
print(abs(a - b) + abs(b - c))