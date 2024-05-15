n = int(input())
s = input()

cnt = [
  (s.count('T'), s[-1] != 'T', 'T'),
  (s.count('A'), s[-1] != 'A', 'A')
]
cnt.sort()
print(cnt[1][2])
