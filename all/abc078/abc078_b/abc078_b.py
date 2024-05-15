x, y, z = map(int, input().split())
print(x // (y + z) - 1 if x - x // (y + z) * (y + z) < z else x // (y + z))