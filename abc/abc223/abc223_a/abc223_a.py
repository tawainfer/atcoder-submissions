x = int(input())
if not(x): x += 1
print("No" if x % 100 else "Yes")