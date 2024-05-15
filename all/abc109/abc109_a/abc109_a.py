a, b = map(int, input().split())
print("YNeos"[not(a * b % 2)::2])