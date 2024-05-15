s = input()
t = input()
cnt = 0
if s[0] == "#": cnt += 1
if s[1] == "#": cnt += 1
if t[0] == "#": cnt += 1
if t[1] == "#": cnt += 1
if cnt > 2: print("Yes")
else: print("No" if s[0] == t[1] == "#" or s[1] == t[0] == "#" else "Yes")