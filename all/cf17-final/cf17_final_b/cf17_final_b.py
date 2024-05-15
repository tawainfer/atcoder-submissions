s = input()
n = [s.count('a'), s.count('b'), s.count('c')]
print("YES" if max(n) - min(n) < 2 else "NO")