v, t, s, d = map(int, input().split())
t *= v
s *= v
print("No" if t <= d <= s else "Yes")