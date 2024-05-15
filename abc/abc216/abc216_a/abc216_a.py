s = input()
if s[len(s) - 1] < "3": print(s[:len(s) - 2] + "-")
elif s[len(s) - 1] < "7": print(s[:len(s) - 2])
else: print(s[:len(s) - 2] + "+")