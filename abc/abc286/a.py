# https://atcoder.jp/contests/abc286/submissions/38243239

n, p, q, r, s = map(int, input().split())
a = list(map(int, input().split()))

# スライスを使ってリストの指定した範囲を入れ替える
a[(p - 1) : q], a[(r - 1) : s] = a[(r - 1) : s], a[(p - 1) : q]

for x in a:
  print(x, end = " ")
