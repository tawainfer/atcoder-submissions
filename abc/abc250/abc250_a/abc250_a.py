h, w = map(int, input().split())
r, c = map(int, input().split())

s = 0;
if h != 1: s += (1 if r == 1 or r == h else 2)
if w != 1: s += (1 if c == 1 or c == w else 2)
print(s)