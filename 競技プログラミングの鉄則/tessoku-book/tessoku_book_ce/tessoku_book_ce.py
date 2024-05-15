n = int(input())
a = [0] + list(map(int, input().split()))

b = [0]
for i in range(1, n + 1):
  b.append(b[-1] + a[i])

q = int(input())
for _ in range(q):
  l, r = map(int, input().split())
  all = r - l + 1
  cnt = b[r] - b[l - 1]

  if all % 2 == 0:
    if cnt > all // 2:
      print('win')
    elif cnt < all // 2:
      print('lose')
    else:
      print('draw')
  else:
    if cnt > all // 2:
      print('win')
    else:
      print('lose')
