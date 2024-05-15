n = int(input())
x = list(map(int, input().split()))
x = sorted(x)

ans = 0
for i in range(n, 4 * n):
  ans += x[i]

print(ans / (3 * n))