a, b = map(int, input().split())
print("Alloy" if 0 < a and b > 0 else "Gold" if b == 0 else "Silver")