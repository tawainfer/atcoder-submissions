x, a, b = map(int, input().split())
a = -a
s = a + b
if s <= 0: print("delicious")
elif s <= x: print("safe")
else: print("dangerous")