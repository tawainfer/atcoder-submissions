h1, m1, h2, m2, k = map(int, input().split())
if h1 == h2: print(m2 - m1 - k)
else:
  if m1 <= m2: print((h2 - h1) * 60 + (m2 - m1) - k)
  else: print((h2 - h1 - 1) * 60 + (60 - (m1 - m2)) - k)