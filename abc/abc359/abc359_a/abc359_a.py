n = int(input())
# a = list(map(int, input().split()))
# x, y = map(int, input().split())
# s = input()

ans = 0
for _ in range(n):
  s = input()
  if s == 'Takahashi':
    ans += 1

print(ans)