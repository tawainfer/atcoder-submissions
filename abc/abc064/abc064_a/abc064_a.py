a, b, c = map(int, input().split())
n = a * 100 + b * 10 + c
print("NO" if n % 4 else "YES")