n = int(input())
s = input()

ans = 0
ok = -1
ng = -1

for i, c in enumerate(s):
  if c == "o":
    ans += (ng + 1)
  else:
    ans += (ok + 1)

  if c == "o":
    ok = i
  else:
    ng = i

print(ans)