a, b = map(int, input().split())
v = [
  [0,0],
  [0,0]
]
v[0][0], v[0][1] = map(int, input().split())
v[1][0], v[1][1] = map(int, input().split())
  
print(v[a - 1][b - 1])