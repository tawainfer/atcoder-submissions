import sys
sys.setrecursionlimit(200009)

n = int(input())
a = list(map(int, input().split()))
b = []
for x in a: b.append(x)

while len(b) > 1: b.append(b.pop() ^ b.pop())
b = b[0]

for x in a:
  print(b ^ x)