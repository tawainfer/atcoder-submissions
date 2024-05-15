h, w = map(int, input().split())
a = []
for i in range(h):
    s = list(input())
    a.append(s)

# 出力
ans = 0
for y in range(h):
    for x in range(w):
        if a[y][x] == '#':
            ans += 1

print(ans)