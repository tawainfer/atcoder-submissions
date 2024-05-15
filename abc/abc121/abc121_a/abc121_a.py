h, w = map(int, input().split())
a, b = map(int, input().split())
print(h * w - ((a * w + h * b) - a * b))