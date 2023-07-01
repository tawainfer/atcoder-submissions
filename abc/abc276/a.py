# https://atcoder.jp/contests/abc276/submissions/37054966

s = input()
ans = -1
for i in range(len(s)):
  if s[i] == 'a': ans = i + 1
print(ans)
