y = int(input())
print('YES' if (28 + (1 // (y % 4 + 1)) * (1 - 1 // (y % 100 + 1)) + (1 // (y % 400 + 1))) % 4 == 1 else 'NO')