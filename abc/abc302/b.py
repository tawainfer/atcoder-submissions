# https://atcoder.jp/contests/abc302/submissions/41590672

h, w = map(int, input().split())
s = [input() for _ in range(h)]
ptn = 'snuke'
ans = list()

def range_check(y, x):
  return 0 <= y < h and 0 <= x < w

def search_snuke(my, mx, path):
  if len(path) == len(ptn):
    global ans
    ans = path
    return
  
  cy, cx = path[-1]
  ey = cy + my
  ex = cx + mx

  if not range_check(ey, ex) or s[ey][ex] != ptn[len(path)]:
    return
  
  path.append((ey, ex))
  search_snuke(my, mx, path)

for cy in range(h):
  for cx in range(w):
    for my in range(-1, 2):
      for mx in range(-1, 2):
        if my == mx == 0 or s[cy][cx] != 's':
          continue

        path = [(cy, cx)]
        search_snuke(my, mx, path)

        if len(ans) == 5:
          for ay, ax in ans:
            print(ay + 1, ax + 1)
          exit()
