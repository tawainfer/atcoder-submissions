import re
import sys

n = int(input())
t = input()

k = 0
for c in t:
  if c == '0': k += 1

if t == '1':
  print(20000000000)
  sys.exit()

if t == '11': 
  print(10000000000)
  sys.exit()

u = '110' * 66668
if not re.search(t, u):
  print(0)
  sys.exit()

print(int(1e10) - k + 1 if t[-1] == '0' else int(1e10) - k)