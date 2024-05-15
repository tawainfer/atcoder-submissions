n = int(input())
a = list(map(int, input().split()))

while len(a) > 1: a.append(a.pop() ^ a.pop())
a = a[0]

print('First' if a != 0 else 'Second')