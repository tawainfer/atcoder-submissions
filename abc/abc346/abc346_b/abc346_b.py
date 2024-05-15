w, b = map(int, input().split())
s = 'wbwbwwbwbwbw' * 200

for i in range(len(s) - (w + b)):
  cw = 0
  cb = 0
  for j in range(w + b):
    if s[i + j] == 'w':
      cw += 1
    else:
      cb += 1
  
  if cw == w and cb == b:
    print('Yes')
    exit()

print('No')