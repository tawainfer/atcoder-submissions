s = input()
print(s[:3] + '0' * (len(s) - 3) if len(s) > 3 else s)