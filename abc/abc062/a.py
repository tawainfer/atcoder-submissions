# https://atcoder.jp/contests/abc062/submissions/38179949

x, y = map(int, input().split())
list = [{1, 3, 5, 7, 8, 10, 12}, {4, 6 ,9, 11}, {2}]

ans = False
for l in list:
  if x in l and y in l:
    ans = True
    break

print("Yes" if ans else "No")
