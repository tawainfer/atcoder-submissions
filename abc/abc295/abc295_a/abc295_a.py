input()
for s in input().split():
  if s in {'and', 'not', 'that', 'the', 'you'}:
    print('Yes')
    exit()

print('No')