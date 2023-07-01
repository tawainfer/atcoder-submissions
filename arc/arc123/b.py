# https://atcoder.jp/contests/arc123/submissions/37531033

n = int(input())
a = sorted(list(map(int, input().split())))[::-1]
b = sorted(list(map(int, input().split())))[::-1]
c = sorted(list(map(int, input().split())))[::-1]

ans = 0
while "loop":
  if not len(a):
    break
  ca = a.pop()

  while len(b) and b[-1] <= ca:
    b.pop()

  if not len(b):
    break
  cb = b.pop()

  while len(c) and c[-1] <= cb:
    c.pop()

  if not len(c):
    break
  c.pop()
  ans += 1

print(ans)
