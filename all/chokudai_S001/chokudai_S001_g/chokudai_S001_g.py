n = int(input())
a = list(input().split())

s = ''
for c in a: s += c

ans = 0
for c in s:
  ans = (ans * 10 + int(c)) % 1000000007

print(ans)