a, b, c = map(int, input().split())
print(min(a + b, min(b + c, c + a)))