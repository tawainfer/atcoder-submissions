import sys

n = int(input())
a = list(map(int, input().split()))

for x in a:
  if x % 2 == 0:
    if not(x % 3 == 0 or x % 5 == 0):
      print("DENIED")
      sys.exit()

print("APPROVED")