# https://atcoder.jp/contests/abc278/submissions/41533327

H, M = map(int, input().split())
M += H * 60

while 1:
  h = M // 60
  m = M % 60
  sh = f'{h:02}'
  sm = f'{m:02}'
  th = sh[0] + sm[0]
  tm = sh[1] + sm[1]
  h2 = int(th)
  m2 = int(tm)

  if 0 <= h2 < 24 and 0 <= m2 < 60:
    print(h, m)
    break

  M = (M + 1) % (24 * 60)
