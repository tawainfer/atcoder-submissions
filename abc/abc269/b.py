# https://atcoder.jp/contests/abc269/submissions/40379034

f = [list(input()) for _ in range(10)]

for a in range(10):
  for b in range(a, 10):
    for c in range(10):
      for d in range(c, 10):
        g = [['.'] * 10 for _ in range(10)]
        
        for i in range(10):
          for j in range(10):
            if a <= i <= b and c <= j <= d:
              g[i][j] = '#'

        if f == g:
          print(a + 1, b + 1, '\n', c + 1, d + 1)
          exit()
