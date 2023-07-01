# https://atcoder.jp/contests/abc123/submissions/34900887

a = int(input())
b = int(input())
c = int(input())
d = int(input())
e = int(input())
x = [a, b, c, d, e]
k = int(input())
i = 0;

ans = True
while i < 5:
  j = i + 1;
  while j < 5:
    if abs(x[i] - x[j]) > k: ans = False
    j += 1
  i += 1
print("Yay!" if ans else ":(")
