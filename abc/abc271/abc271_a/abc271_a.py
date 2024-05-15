v = int(input())
s = "0x%X" % v
if len(s) == 3: print('0' + s[2], sep = "")
else: print(s[2], s[3], sep = "")