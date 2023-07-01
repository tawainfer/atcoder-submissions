# https://atcoder.jp/contests/arc129/submissions/41923738

n, l, r = map(int, input().split())

bit = []
for i in range(60):
  bit.append(1 if n & (1 << i) else 0)

pow2 = [1]
for _ in range(60):
  pow2.append(pow2[-1] * 2)

cnt_r = 0

for i in range(60):
  if pow2[i + 1] - 1 <= r:
    if bit[i] == 1:
      cnt_r += pow2[i]
  else:
    if bit[i] == 1:
      cnt_r += pow2[i] - (pow2[i + 1] - 1 - r)
    break

cnt_l = 0
l -= 1

for i in range(60):
  if pow2[i + 1] - 1 <= l:
    if bit[i] == 1:
      cnt_l += pow2[i]
  else:
    if bit[i] == 1:
      cnt_l += pow2[i] - (pow2[i + 1] - 1 - l)
    break

print(cnt_r - cnt_l)
