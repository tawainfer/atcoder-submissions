# https://atcoder.jp/contests/abc220/submissions/40377841

def f(s: str, k: int) -> str:
  a = 1
  x = 0

  for i in range(len(s) - 1, -1, -1):
    x += a * int(s[i])
    a *= k
  return x

k = int(input())
a, b = map(int, input().split())

a = f(str(a), k)
b = f(str(b), k)

print(a * b)
