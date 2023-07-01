# https://atcoder.jp/contests/abc231/submissions/37705646

n = int(input())
dist = {}

for _ in range(n):
  s = input()
  if s in dist:
    dist[s] += 1
  else:
    dist[s] = 1

name = ""
ma = -1e9

for k, v in dist.items():
  if ma < v:
    name = k
    ma = v

print(name)
