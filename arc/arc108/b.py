# https://atcoder.jp/contests/arc108/submissions/41918949

n = int(input())
s = list(input())

ans = n
stack = []

for i in range(n):
  if s[i] in {'f', 'o', 'x'}:
    stack.append(s[i])
    if len(stack) < 3:
      continue

    if stack[-3] == 'f' and stack[-2] == 'o' and stack[-1] == 'x':
      ans -= 3
      for _ in range(3):
        stack.pop()
  else:
    stack.clear()

print(ans)
