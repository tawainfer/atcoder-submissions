a, b = map(int, input().split())
if a < 2: a = 14
if b < 2: b = 14

if a > b: print("Alice")
elif a < b: print("Bob")
else: print("Draw")