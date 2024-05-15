n, p, q = map(int, input().split())
d = list(map(int, input().split()))
d.sort()

print(min(p, q + d[0]))