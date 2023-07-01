# https://atcoder.jp/contests/abc249/submissions/37087467

a, b, c, d, e, f, x = map(int, input().split())
ta = [0]
ao = [0]
st = a + c
sa = d + f

for i in range(x):
  y = i % st
  ta.append(ta[len(ta) - 1])
  if y < a: ta[len(ta) - 1] += b
    
  y = i % sa
  ao.append(ao[len(ao) - 1])
  if y < d: ao[len(ao) - 1] += e

a = ta[len(ta) - 1]
b = ao[len(ao) - 1]

if a > b: print("Takahashi")
elif a < b: print("Aoki")
else: print("Draw")
