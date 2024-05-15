h, w = map(int, input().split())

for y in range(h):
  l = list(input().split())
  
  for x in range(w):
    if l[x] == 'snuke':
      print(chr(65 + x), y + 1, sep = '')
      exit()