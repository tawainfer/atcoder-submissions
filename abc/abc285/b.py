# https://atcoder.jp/contests/abc285/submissions/38099586

def solve():
  n = int(input())
  s = input()

  for i in range(n - 1):
    for j in range(n - 1):
      if s[j] == s[j + i + 1]:
        print(j)
        break
      if i + j + 2 == n:
        print(j + 1)
        break

solve()
