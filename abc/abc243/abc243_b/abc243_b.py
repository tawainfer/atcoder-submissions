n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

just = 0
near = 0

for i in range(n):
  if a[i] ==  b[i]:
    just += 1

for i in range(n):
  find = False
  for j in range(n):
    if a[i] == b[j] and i != j:
      find = True

  if find:
    near += 1

print(just)
print(near)