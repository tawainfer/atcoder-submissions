a = list(map(str, input().split()))
s = ''
for c in a:
  s = s + c

s = s[::-1]
print(int(s, 2))