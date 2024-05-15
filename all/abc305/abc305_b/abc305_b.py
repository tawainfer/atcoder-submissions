p, q = map(str, input().split())

t = [3, 1, 4, 1, 5, 9]
t.reverse()

d = [0]
while len(t) > 0:
  d.append(d[-1] + t.pop())

p = ord(p) - 65
q = ord(q) - 65

if p < q: print(d[q] - d[p])
else: print(d[p] - d[q])