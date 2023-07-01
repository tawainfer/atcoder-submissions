# https://atcoder.jp/contests/arc124/submissions/41928465

n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
a.sort()
b.sort()

ans = set()
for i in range(n):
  x = a[0] ^ b[i]

  c = []
  for j in range(n):
    c.append(a[j] ^ x)
  c.sort()

  if b == c:
    ans.add(x)

ans = list(ans)
ans.sort()

print(len(ans))
for x in ans:
  print(x)
