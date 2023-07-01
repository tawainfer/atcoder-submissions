# https://atcoder.jp/contests/abc018/submissions/38181103

v = []
for _ in range(3):
  v.append(int(input()))

for x in v:
  if max(v) == x:
    print(1)
  elif min(v) == x:
    print(3)
  else:
    print(2)
