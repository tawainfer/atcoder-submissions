n, m = map(int, input().split())
a = set(map(int, input().split()))

st = []
for i in range(1, n + 1):
  st.append(i)

  if i not in a:
    while len(st) > 0:
      print(st.pop(), end = ' ')