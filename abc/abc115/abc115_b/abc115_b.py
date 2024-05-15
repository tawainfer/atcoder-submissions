n = int(input())
p = []
for _ in range(n):
  p.append(int(input()))
p = sorted(p)

print(sum(p) - p[-1] // 2)