h = 21
if int((n := int(input()))) > 59:
  h += 1
  n -= 60
print(h, ":", sep="", end="")
if n < 10: print(0, end="")
print(n)