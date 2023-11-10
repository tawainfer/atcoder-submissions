# https://atcoder.jp/contests/abc327/submissions/47415290

n = int(input())
s = input()

for i in range(1, n):
  if s[i - 1 : i + 1] in {'ab', 'ba'}:
    print('Yes')
    exit()

print('No')

