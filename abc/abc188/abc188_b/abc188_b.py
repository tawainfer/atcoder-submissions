n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

sum = 0
for i in range(n):
  sum += a[i] * b[i]

print("No" if sum else "Yes")