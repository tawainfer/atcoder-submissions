a, b = map(int, input().split())
print(a + b if not(b % a) else b - a)