a, b = map(int, input().split())
a, b = sorted([a, b])
print("IMPOSSIBLE" if abs(a - b) % 2 else abs(a - b) // 2 + a)