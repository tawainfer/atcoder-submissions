s = list(input())
if s[0] == s[1] == s[2]: print(1)
elif s[0] == s[1] != s[2] or s[1] == s[2] != s[0] or s[2] == s[0] != s[1]: print(3)
else: print(6)