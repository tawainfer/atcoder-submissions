n, r = map(int, input().split())
print(r if n > 9 else 100 * (10 - n) + r)