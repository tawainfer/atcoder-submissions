# https://atcoder.jp/contests/abc249/submissions/38036192

s = input()
n = len(s)
big = False
small = False
diff = True

for i in range(n):
  for j in range(i + 1, n):
    if s[i] == s[j]:
      diff = False

    if s[i] <= 'Z':
      big = True

    if 'a' <= s[i]:
      small = True

    if s[j] <= 'Z':
      big = True

    if 'a' <= s[j]:
      small = True

if big and small and diff:
  print("Yes")
else:
  print("No")
