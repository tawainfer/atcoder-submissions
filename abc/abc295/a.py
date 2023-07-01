# https://atcoder.jp/contests/abc295/submissions/40067988

n = int(input())
w = input().split()

for s in w:
  if s in {'and', 'not', 'that', 'the', 'you'}:
    print('Yes')
    exit()

print('No')
