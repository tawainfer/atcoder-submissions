s = input()
cnt = 0

for c in s:
  if c == 'o':
    cnt += 1

print("YES" if cnt + (15 - len(s)) > 7 else "NO")